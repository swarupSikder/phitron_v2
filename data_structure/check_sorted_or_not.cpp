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

bool checkAsc(Node* head){
    bool flag = true;
    int min = head->val;            //1st node value

    Node* tmp = head->next;         //2nd node value
    while(tmp != NULL){
        if(tmp->val <min){
            min = tmp->val;
        }
        else{
            //cout<< "found" <<endl;
            flag = false;
            break;
        }
        tmp = tmp->next;
    }

    return flag;
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
    (checkAsc(head))? std::cout<< "Yes" <<endl :  std::cout<< "No" <<endl;
    
    
    return 0;
}