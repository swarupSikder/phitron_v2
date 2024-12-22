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

int main(){
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

    //print
    outputLinkedList(head);
    
    
    return 0;
}