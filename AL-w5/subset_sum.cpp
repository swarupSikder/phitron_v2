//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int val[1005];

bool subset_sum(int i, int sum){
    //base case
    if(i<0){
        if(sum == 0) return true;
        else return false;
    }

    //main task
    if(val[i] <= sum){
        bool op1 = subset_sum(i-1, sum-val[i]);
        bool op2 = subset_sum(i-1, sum);
        return op1 || op2;
    }
    else{
        return subset_sum(i-1, sum);
    }
}

int main(){
    int n;
    cin>> n;

    for(int i=0; i<n ;i++){
        cin>> val[i];
    }

    int sum;
    cin>> sum;

    (subset_sum(n-1, sum))? std::cout<< "YES" <<endl: std::cout<< "NO" <<endl;
    
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