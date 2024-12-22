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

void insert_tail(DoubleNode* &head, DoubleNode* &tail, int val){
    //create a new node first
    DoubleNode* newNode = new DoubleNode(val);

    //edge case: if list is empty
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    //list is not empty
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    insert_tail(head, tail, 100);

    //print
    outputLinkedList(head);
    
    return 0;
}