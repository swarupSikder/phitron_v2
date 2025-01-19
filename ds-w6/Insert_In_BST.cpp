//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        bool isUsed;

        TreeNode(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
            isUsed = false;
        }
};

TreeNode* inputBinaryTree(){
    int val;
    cin>> val;

    TreeNode* root;
    //edge case: tree is empty
    if(val == -1) root = NULL;
    else root = new TreeNode(val);
    
    queue<TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty()){
        //store and pop the front from the queue
        TreeNode* f = q.front();
        q.pop();

        //work with that node
        int l, r;
        cin>> l >> r;
        TreeNode *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new TreeNode(l);

        if(r == -1) myRight = NULL;
        else myRight = new TreeNode(r);

        f->left = myLeft;
        f->right = myRight; 

        //push the child of that node into the queue
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}

void insert(TreeNode* &root, int val){
    if(!root) root = new TreeNode(val);
    if(val < root->val){
        if(root->left){
            insert(root->left, val);
        }
        else {
            root->left = new TreeNode(val);
        }
    }
    else {
        if(root->right){
            insert(root->right, val);
        }
        else {
            root->right = new TreeNode(val);
        }
    }
}

void levelOrderTraverse(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        //store and pop the front from the queue
        TreeNode* f = q.front();
        q.pop();

        //work with that node
        cout<< f->val <<" ";

        //push the child of that node into the queue
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int main(){
    TreeNode* root = inputBinaryTree();
    int val;
    cin>> val;
    insert(root, val);
    levelOrderTraverse(root);
    
    return 0;
}