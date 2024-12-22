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

int main(){
    DoubleNode* head = new DoubleNode(10);
    DoubleNode* a = new DoubleNode(20);
    DoubleNode* tail = new DoubleNode(30);
    
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    //print
    outputLinkedListReverse(tail);
    
    return 0;
}