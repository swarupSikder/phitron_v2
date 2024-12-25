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

void inputLinkedList(DoubleNode* &head, DoubleNode* &tail, int val){
    DoubleNode* newNode = new DoubleNode(val);

    //Edge case, (if linked list is empty)
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void sortAscDLL(DoubleNode* &head, DoubleNode* &tail){
    //selection sort
    for(DoubleNode *i=head; i != NULL ;i=i->next){
        for(DoubleNode *j=head; j != NULL ;j=j->next){
            if(j->val > i->val){
                swap(i->val, j->val);
            }
        }
    }
}

int main(){
    //list
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;

    int val;
    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        inputLinkedList(head, tail, val);
    }

    //sort ASC
    sortAscDLL(head, tail);


    //print
    outputLinkedList(head);

    return 0;
}