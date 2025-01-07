//author:   Swarup Sikder
//judge:    ...
//problem:  check two stacks are same or not (using STL stack)
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

    //stack (2)
    cin>> n;
    for(int i=0; i<n ;i++){
        cin>> val;
        stack2.push(val);
    }

    //edge case
    if(stack1.size() != stack2.size()){
        cout<< "NO" <<endl;
        return 0;
    }

    //other cases
    bool areSame = true;
    while(!stack1.empty() && !stack2.empty()){
        if(stack1.top() != stack2.top()){
            areSame = false;
            break;
        }

        stack1.pop();
        stack2.pop();
    }

    (areSame)? std::cout<< "YES" : std::cout<< "NO" <<endl;
    
    return 0;
}