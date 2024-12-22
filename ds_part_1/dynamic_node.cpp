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

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    //head.next = &a; (it will show an error)
    //because head is just a pointer here, not an object
    //(*head).next = a;         //method 1
    head->next = a;             //method 2
    a->next = b;

    cout<< head->val <<" "<< head->next->val <<" "<< head->next->next->val <<endl;
    
    return 0;
}