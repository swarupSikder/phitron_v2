//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void fun(int* &p){
    int y = 200;
    p = &y;
    cout<<"In fun: "<< *p <<endl;
}

int main(){
    int x = 10;
    int* p = &x;

    fun(p);

    cout<<"In main: "<< *p <<endl;
    
    return 0;
}