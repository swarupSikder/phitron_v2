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

class CustomQueue{
    public:
    DoubleNode* head = NULL;
    DoubleNode* tail = NULL;
    int sz = 0;

    void push(int val){
        sz++;
        DoubleNode* newNode = new DoubleNode(val);
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
        //prevent popping from an empty queue
        if (head == NULL) return;

        sz--;
        DoubleNode* deleteNode = head;
        head = head->next;
        delete deleteNode;
        
        if(head == NULL){
            tail = NULL;
            return;
        }
        
        //only set prev if head is not NULL
        head->prev = NULL;
    }

    int front(){
        return head->val;
    }

    int back(){
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
    CustomQueue q;
    for(int i=0; i<n ;i++){
        cin>> val;
        q.push(val);
    }

    while(!q.empty()){
        cout<< q.front() <<endl;
        q.pop();
    }
    
    
    return 0;
}