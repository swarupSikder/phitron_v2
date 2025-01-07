//author:   Swarup Sikder
//judge:    ...
//problem:  copy stack
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int val;
    stack<int> stack1, stack2;

    //stack (1)
    cin>> n;
    for(int i=0; i<n ;i++){
        cin>> val;
        stack1.push(val);
    }

    //copy element of stack1 to stack2 in auto-reverse order (manual)
    while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }

    //print
    while(!stack2.empty()){
        cout<< stack2.top() <<" ";
        stack2.pop();
    }
    cout<<endl;

    
    
    return 0;
}