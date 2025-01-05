//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    stack<int> myStack;
    int val;

    for(int i=0; i<n ;i++){
        cin>> val;
        myStack.push(val);
    }

    while(!myStack.empty()){
        cout<< myStack.top() <<endl;
        myStack.pop();
    }
    
    return 0;
}