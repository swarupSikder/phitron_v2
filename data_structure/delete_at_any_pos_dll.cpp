//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class DoubleNode{
    public:
        int val;
        DoubleNode* prev;
        DoubleNode* next;

        DoubleNode(int val){
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
};

void outputLinkedList(DoubleNode* head){
    if(head == NULL){
        cout<< "" <<endl;
        return;
    }

    DoubleNode* tmp = head;
    while(tmp != NULL){
        //print the node
        cout<< tmp->val;

        //control trailing spaces
        (tmp->next == NULL)? std::cout<<endl : std::cout<<" ";

        //forward the node
        tmp = tmp->next;
    }
}

int listSize(DoubleNode* head){
    int i=0;
    DoubleNode* tmp = head;
    while(tmp != NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

void delete_head(DoubleNode* &head, DoubleNode* &tail){
    //edge case: if list is empty
    if(head == NULL){
        return;
    }

    DoubleNode* deleteNode = head;
    head = head->next;
    delete deleteNode;

    //edge case: if list has only one element
    if(head == NULL){
        tail = NULL;
    }

    head->prev = NULL;
}

void delete_tail(DoubleNode* &head, DoubleNode* &tail){
    //edge case: if list is empty
    if(head == NULL){
        return;
    }

    DoubleNode* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    //edge case: if list has only one element
    if(tail == NULL){
        head = NULL;
        return;
    }

    tail->next = NULL;
}

void deleteValue(DoubleNode* &head, DoubleNode* &tail, int idx){
    if(idx == 0){
        delete_head(head, tail);
    }
    else if(idx == listSize(head)-1){               //for deletion:  size-1
        delete_tail(head, tail);                    //for insertion: size
    }
    else{
        //edge case: if list is empty
        if(head == NULL){
            return;
        }

        //list is not empty
        DoubleNode* tmp = head;
        for(int i=0; i<idx-1 ;i++){
            tmp = tmp->next;
        }

        //cout<< tmp->val <<endl;

        DoubleNode* deleteNode = tmp->next;
        tmp->next = deleteNode->next;
        deleteNode->next->prev = tmp;
        delete deleteNode;
    }
    
}

int main(){
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;

    head = new DoubleNode(10);
    DoubleNode* a = new DoubleNode(20);
    tail = new DoubleNode(30);
    
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    //print
    outputLinkedList(head);

    //insert at head
    int idx = 2;                        //0 based index
    deleteValue(head, tail, idx);

    //print
    outputLinkedList(head);
    
    return 0;
}