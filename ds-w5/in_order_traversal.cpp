//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class BinaryNode{
    public:
        int val;
        BinaryNode* left;
        BinaryNode* right;

        BinaryNode(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void inOrderTraverse(BinaryNode* root){
    //base case
    if(root == NULL) return;

    //go to left
    inOrderTraverse(root->left);

    //print root
    cout<< root->val <<" ";

    //go to right
    inOrderTraverse(root->right);
}

int main(){
    BinaryNode* root = new BinaryNode(10);
    BinaryNode* a = new BinaryNode(20);
    BinaryNode* b = new BinaryNode(30);
    BinaryNode* c = new BinaryNode(40);
    BinaryNode* d = new BinaryNode(50);
    BinaryNode* e = new BinaryNode(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    inOrderTraverse(root);
    
    return 0;
}