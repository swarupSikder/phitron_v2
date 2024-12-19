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

int listSize(Node* head){
    int i=0;
    Node* tmp = head;
    while(tmp != NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

void sort_linked_list(Node* head){
    for(Node* i = head; i->next != NULL ; i = i->next){
        for(Node* j = i->next; j != NULL ; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
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
    //List (1)
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int val;
    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head1, tail1, val);
    }


    //List (2)
    Node* head2 = NULL;
    Node* tail2 = NULL;

    //int val;
    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2, tail2, val);
    }


    //print
    // print_linked_list(head1);
    // print_linked_list(head2);

    if(listSize(head1) == listSize(head2)){
        cout<< "Yes" <<endl;
    }
    else{
        cout<< "No" <<endl;
    }
    
    
    return 0;
}