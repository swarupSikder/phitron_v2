//author:   Swarup Sikder
//judge:    ...
//problem:  copy stack
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int val;
    queue<int> mainQList;
    stack<int> st;


    //mainQList input
    cin>> n;
    for(int i=0; i<n ;i++){
        cin>> val;
        mainQList.push(val);
    }

    //copy element of mainQList to st in auto-reverse order (manual)
    while(!mainQList.empty()){
        st.push(mainQList.front());
        mainQList.pop();
    }

    //copy element of st to mainQList in auto-reverse order (manual)
    while(!st.empty()){
        mainQList.push(st.top());
        st.pop();
    }


    //print
    while(!mainQList.empty()){
        cout<< mainQList.front() <<" ";
        mainQList.pop();
    }
    cout<<endl;

    
    
    return 0;
}