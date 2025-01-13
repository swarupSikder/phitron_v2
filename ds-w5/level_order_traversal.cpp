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

void levelOrderTraverse(BinaryNode* root){
    queue<BinaryNode*> q;
    q.push(root);

    while(!q.empty()){
        // 1. pop the front-node from the queue
        BinaryNode* f = q.front();
        q.pop();

        // 2. print that node
        cout<< f->val <<" ";

        // 3. push the child of that node into the queue
        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
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

    levelOrderTraverse(root);
    
    return 0;
}