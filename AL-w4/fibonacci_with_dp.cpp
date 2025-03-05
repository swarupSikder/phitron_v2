//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int dp[1005];

int fn(int n){
    if(n<2) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fn(n-1) + fn(n-2);
    return dp[n];
}

int main(){
    memset(dp, -1, sizeof(dp));

    int n;
    cin>> n;
    cout<< fn(n) <<endl;
    
    return 0;
}