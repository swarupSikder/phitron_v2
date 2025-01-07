//author:   Swarup Sikder
//judge:    ...
//problem:  check two stacks are same or not
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
    int val;
    CustomStack stack1, stack2;

    //stack (1)
    cin>> n;
    for(int i=0; i<n ;i++){
        cin>> val;
        stack1.push(val);
    }

    //stack (2)
    cin>> n;
    for(int i=0; i<n ;i++){
        cin>> val;
        stack2.push(val);
    }

    //edge case
    if(stack1.size() != stack2.size()){
        cout<< "NO" <<endl;
        return 0;
    }

    //other cases
    bool areSame = true;
    while(!stack1.empty() && !stack2.empty()){
        if(stack1.top() != stack2.top()){
            areSame = false;
            break;
        }

        stack1.pop();
        stack2.pop();
    }

    (areSame)? std::cout<< "YES" : std::cout<< "NO" <<endl;
    
    return 0;
}