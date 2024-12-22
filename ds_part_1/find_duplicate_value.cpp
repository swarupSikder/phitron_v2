//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool hasDuplicate(Node* head){
    bool flag = false;

    while(1){
        Node* savedNext = head->next;       //modify the head
        if(savedNext == NULL) break;        //base case

        Node* tmp = head->next;             //using nested loop
        while(tmp != NULL){
            if(head->val == tmp->val){
                flag = true;
                break;
            }
            tmp = tmp->next;
        }
        head = savedNext;
    }

    return flag;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<< tmp->val <<endl;
        tmp = tmp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int countSize=0;

    while(1){
        int val;
        cin>> val;
        if(val == -1) break;

        countSize++;
        insert_at_tail(head, tail, val);
    }

    //print_linked_list(head);
    //cout<<"Size : "<< countSize <<endl;

    if(hasDuplicate(head)){
        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    
    return 0;
}