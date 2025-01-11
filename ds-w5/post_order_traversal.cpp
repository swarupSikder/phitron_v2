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

void postOrderTraverse(BinaryNode* root){
    //base case
    if(root == NULL) return;

    //go to left
    postOrderTraverse(root->left);

    //go to right
    postOrderTraverse(root->right);

    //print root
    cout<< root->val <<" ";
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

    postOrderTraverse(root);
    
    return 0;
}