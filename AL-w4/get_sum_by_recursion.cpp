//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int getSum(int n){
    if(n==0) return 0;
    int sum = getSum(n-1);
    return sum+n;
}

int main(){
    int n;
    cin>> n;
    cout<< getSum(n) <<endl;
    return 0;
}