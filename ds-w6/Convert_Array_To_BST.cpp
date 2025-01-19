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

TreeNode* convert(int a[], int n, int l, int r){
    if(l > r) return NULL;
    int mid = (l+r)/2;
    TreeNode* root = new TreeNode(a[mid]);
    TreeNode* leftRoot = convert(a,n,l,mid-1);
    TreeNode* rightRoot = convert(a,n,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
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
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    TreeNode* root = convert(a, n, 0, n-1);
    levelOrderTraverse(root);
    
    return 0;
}