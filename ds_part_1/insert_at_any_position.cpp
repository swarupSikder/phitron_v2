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

void insert_at_any_pos(Node* &head, int idx, int val){
    Node* newNode = new Node(val);

    //Edge case, if(idx indicates the 1st position)
    if(idx==0){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* tmp = head;
    for(int i=1; i<idx ;i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    
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

    // cout<< head->val <<endl;
    // cout<< head->next->val <<endl;
    // cout<< head->next->next->val <<endl;

    insert_at_any_pos(head, 0, 40);
    
    print_linked_list(head);
    
    return 0;
}