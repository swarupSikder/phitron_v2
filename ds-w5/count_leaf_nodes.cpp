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

BinaryNode* inputBinaryTree(){
    int val;
    cin>> val;

    BinaryNode* root;
    //edge case: tree is empty
    if(val == -1) root = NULL;
    else root = new BinaryNode(val);
    
    queue<BinaryNode*> q;
    //edge case: tree is empty
    if(root != NULL) q.push(root);

    while(!q.empty()){
        // 1. pop the front-node from the queue
        BinaryNode* f = q.front();
        q.pop();

        // 2. work with that node
        int l, r;
        cin>> l >> r;
        BinaryNode *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new BinaryNode(l);

        if(r == -1) myRight = NULL;
        else myRight = new BinaryNode(r);

        f->left = myLeft;
        f->right = myRight; 


        // 3. push the child of that node into the queue
        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }

    return root;
}

int countLeafNodes(BinaryNode* root){
    //base case
    if(root == NULL){
        return 0;
    }

    //check leaf
    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    int left = countLeafNodes(root->left);
    int right = countLeafNodes(root->right);
    return left + right;
}

int main(){
    BinaryNode* root = inputBinaryTree();
    cout<< countLeafNodes(root);
    
    return 0;
}