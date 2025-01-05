//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class CustomStack{
    public:
    list<int> myList;

    void push(int val){
        myList.push_back(val);
    }

    void pop(){
        myList.pop_back();
    }

    int top(){
        return myList.back();
    }

    int size(){
        return myList.size();
    }

    bool empty(){
        return myList.empty();
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