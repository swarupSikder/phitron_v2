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

void delete_pos(Node* &head, int pos){
    Node* tmp = head;
    for(int i=1; i<pos ;i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    delete deleteNode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<< tmp->val <<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int pos;
    cin>> pos;

    //print
    print_linked_list(head);

    delete_pos(head, pos);

    //print again
    print_linked_list(head);
    
    return 0;
}