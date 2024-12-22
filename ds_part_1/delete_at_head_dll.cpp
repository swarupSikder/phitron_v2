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
    delete_head(head, tail);

    //print
    outputLinkedList(head);
    
    return 0;
}