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

    //Edge case, (if linked list is empty)
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<< tmp->val <<endl;
        tmp = tmp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    //declare tail
    Node* tail = b;

    // cout<< head->val <<endl;
    // cout<< head->next->val <<endl;
    // cout<< head->next->next->val <<endl;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    
    print_linked_list(head);
    
    return 0;
}