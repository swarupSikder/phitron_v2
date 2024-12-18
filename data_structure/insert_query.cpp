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
        cout<< tmp->val <<" ";
        tmp = tmp->next;
    }
    cout<< endl;
}

int listSize(Node* head){
    int i=0;
    Node* tmp = head;
    while(tmp != NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while(1){
        int val;
        cin>> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    //print_linked_list(head);
    //cout<<"Size : "<< countSize <<endl;

    int idx, newVal;
    while(cin>> idx >> newVal){
        if(idx>listSize(head)){
            cout<< "Invalid" <<endl;
        }
        else{
            insert_at_any_pos(head, idx, newVal);
            print_linked_list(head);
        }
    }
    
    
    return 0;
}