//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    queue<int> q;
    int val;

    for(int i=0; i<n ;i++){
        cin>> val;
        q.push(val);
    }

    //print
    while(!q.empty()){
        cout<< q.front() <<endl;
        q.pop();
    }
    
    return 0;
}