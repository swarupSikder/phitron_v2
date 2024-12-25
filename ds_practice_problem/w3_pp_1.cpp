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

void inputLinkedList(DoubleNode* &head, DoubleNode* &tail, int val){
    DoubleNode* newNode = new DoubleNode(val);

    //Edge case, (if linked list is empty)
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int listSize(DoubleNode* head){
    int i=0;
    DoubleNode* tmp = head;
    while(tmp != NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

void outputLinkedList(DoubleNode* head){
    if(head == NULL){
        cout<< "" <<endl;
        return;
    }

    DoubleNode* tmp = head;
    while(tmp != NULL){
        //print the node
        cout<< tmp->val;

        //control trailing spaces
        (tmp->next == NULL)? std::cout<<endl : std::cout<<" ";

        //forward the node
        tmp = tmp->next;
    }
}

void outputLinkedListReverse(DoubleNode* tail){
    if(tail == NULL){
        cout<< "" <<endl;
        return;
    }

    DoubleNode* tmp = tail;
    while(tmp != NULL){
        //print the node
        cout<< tmp->val;

        //control trailing spaces
        (tmp->prev == NULL)? std::cout<<endl : std::cout<<" ";

        //forward the node
        tmp = tmp->prev;
    }
}

int main(){
    //list 1
    DoubleNode* head1 = NULL;
    DoubleNode* tail1 = NULL;

    int val;
    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        inputLinkedList(head1, tail1, val);
    }

    //list 2
    DoubleNode* head2 = NULL;
    DoubleNode* tail2 = NULL;

    while(1){
        cin>> val;
        if(val == -1){
            break;
        }
        inputLinkedList(head2, tail2, val);
    }

    //edge case: if list size are not same
    if(listSize(head1) != listSize(head2)){
        cout<< "NO" <<endl;
        return 0;
    }

    //other cases
    DoubleNode* tmp1 = head1;
    DoubleNode* tmp2 = head2;
    bool isEqual = true;

    while(tmp1->next != NULL){
        if(tmp1->val != tmp2->val){
            isEqual = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    //print
    (isEqual)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;

    
    return 0;
}