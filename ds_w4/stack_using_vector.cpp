//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class CustomStack{
    public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();
    }
};

int main(){
    int n;
    cin>> n;

    int val;
    CustomStack customStack;
    for(int i=0; i<n ;i++){
        cin>> val;
        customStack.push(val);
    }

    //print
    while(!customStack.empty()){
        cout<< customStack.top() <<endl;
        customStack.pop();
    }
    
    return 0;
}