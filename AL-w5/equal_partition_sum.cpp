//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int val[1005];
int dp[1005][1005];

bool subset_sum(int i, int sum){
    //base case
    if(i<0){
        if(sum == 0) return true;
        else return false;
    }

    //dp check
    if(dp[i][sum] != -1) return dp[i][sum];

    //main task
    if(val[i] <= sum){
        bool op1 = subset_sum(i-1, sum-val[i]);
        bool op2 = subset_sum(i-1, sum);
        dp[i][sum] = op1 || op2;
        return dp[i][sum];
    }
    else{
        dp[i][sum] = subset_sum(i-1, sum);
        return dp[i][sum];
    }
}

int main(){
    int n;
    cin>> n;

    int sum = 0;

    for(int i=0; i<n ;i++){
        cin>> val[i];
        sum += val[i];
    }

    //check sum is even or odd
    if(sum%2 == 1){
        cout<< "NO" <<endl;
        return 0;
    }

    //memory set
    for(int i=0; i<=n ;i++){
        for(int j=0; j<=sum ;j++){
            dp[i][j] = -1;
        }
    }

    (subset_sum(n-1, sum/2))? std::cout<< "YES" <<endl: std::cout<< "NO" <<endl;
    
    return 0;
}

/*
input:
4
1 2 4 6
7

output:
YES
*/