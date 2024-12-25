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

int listSize(DoubleNode* head){
    int i=0;
    DoubleNode* tmp = head;
    while(tmp != NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
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

void insertValue(DoubleNode* &head, DoubleNode* &tail, int val, int idx){
    if(idx == 0){
        insert_head(head, tail, val);
    }
    else if(idx == listSize(head)){
        insert_tail(head, tail, val);
    }
    else{
        //create a new node first
        DoubleNode* newNode = new DoubleNode(val);

        //edge case: if list is empty
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        //list is not empty
        DoubleNode* tmp = head;
        for(int i=0; i<idx-1 ;i++){
            tmp = tmp->next;
        }

        //cout<< tmp->val <<endl;

        newNode->prev = tmp;
        newNode->next = tmp->next;

        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
    
}

int main(){
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;

    int q;
    cin>> q;

    while(q--){
        int x, v;
        cin>> x >> v;

        //invalid case
        if(x<0 || x>listSize(head)){
            cout<< "Invalid" <<endl;
            continue;
        }
        
        insertValue(head, tail, v, x);
        outputLinkedList(head);
        outputLinkedListReverse(tail);
    }
    
    return 0;
}