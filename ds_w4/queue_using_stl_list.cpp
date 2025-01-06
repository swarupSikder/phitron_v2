//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class CustomQueue{
    public:
    list<int> myList;

    void push(int val){
        myList.push_back(val);
    }

    void pop(){
        myList.pop_front();
    }

    int front(){
        return myList.front();
    }

    int back(){
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
    CustomQueue q;
    for(int i=0; i<n ;i++){
        cin>> val;
        q.push(val);
    }

    while(!q.empty()){
        cout<< q.front() <<endl;
        q.pop();
    }
    
    
    return 0;
}