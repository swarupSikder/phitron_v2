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

void outputLinkedListReverse(DoubleNode* tail){
    if(tail == NULL){
        cout<< "" <<endl;
        return;
    }

    DoubleNode* tmp = tail;
    while(tmp != NULL){
        //print the node
        cout<< tmp->val;

        //control trailing spaces
        (tmp->prev == NULL)? std::cout<<endl : std::cout<<" ";

        //forward the node
        tmp = tmp->prev;
    }
}

void insert_head(DoubleNode* &head, DoubleNode* &tail, int val){
    //edge case: if list is empty
    if(head == NULL){
        DoubleNode* newNode = new DoubleNode(val);
        head = newNode;
        tail = newNode;
        return;
    }

    DoubleNode* newNode = new DoubleNode(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main(){
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;

    // head = new DoubleNode(10);
    // DoubleNode* a = new DoubleNode(20);
    // tail = new DoubleNode(30);
    
    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;

    //print
    outputLinkedList(head);

    //insert at head
    insert_head(head, tail, 100);
    insert_head(head, tail, 101);

    //print
    outputLinkedList(head);
    
    return 0;
}