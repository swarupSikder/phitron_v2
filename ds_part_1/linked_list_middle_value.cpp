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

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<< tmp->val <<endl;
        tmp = tmp->next;
    }
}

void print_mid_val(Node* head, int countSize){
    Node* tmp = head;
    for(int i=1; i<=countSize ;i++){
        //when countSize is even print an extra mid (2nd task as per my thinking)
        if(countSize%2==0 && i == countSize/2){
            cout<< tmp->val <<" ";
        }

        //when countSize is odd/even print the last mid (1st task as per my thinking)
        if(i == (countSize/2)+1){
            cout<< tmp->val <<endl;
            break;
        }
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

    print_mid_val(head, countSize);
    
    return 0;
}