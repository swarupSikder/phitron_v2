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

class CustomStack{
    public:
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;
    int sz = 0;

    void push(int val){
        DoubleNode* newNode = new DoubleNode(val);
        sz++;

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        if(head == NULL){
            return;
        }

        DoubleNode* deleteNode = tail;
        sz--;

        tail = tail->prev;
        delete deleteNode;
        
        if(tail == NULL){
            head = NULL;
            return;
        }

        tail->next = NULL;
    }

    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return head==NULL;
    }
};

int main(){
    int n;
    cin>> n;

    int val;
    CustomStack customStack;
    for(int i=0; i<n ;i++){
        cin>> val;
        customStack.push(val);
    }

    //print
    while(!customStack.empty()){
        cout<< customStack.top() <<endl;
        customStack.pop();
    }
    
    return 0;
}