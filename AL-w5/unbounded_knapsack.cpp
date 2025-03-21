//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int val[1005];
int weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_weight){
    if(i<0 || mx_weight <= 0) return 0;
    if(dp[i][mx_weight] != -1) return dp[i][mx_weight];

    if(weight[i] <= mx_weight){
        int op1 = knapsack(i, mx_weight-weight[i]) + val[i];
        int op2 = knapsack(i-1, mx_weight);
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else{
        dp[i][mx_weight] = knapsack(i-1, mx_weight);
        return dp[i][mx_weight];
    }
}

int main(){
    //input
    int n, mx_weight;
    cin>> n >> mx_weight;
    for(int i=0; i<n ;i++){
        cin>> weight[i] >> val[i];
    }

    //memory set
    for(int i=0; i<=n ;i++){
        for(int j=0; j<=mx_weight ;j++){
            dp[i][j] = -1;
        }
    }

    //call knapsack
    cout<< knapsack(n-1, mx_weight) <<endl;
    
    return 0;
}


/*
input:

3 8
3 30
4 50
5 60

*/