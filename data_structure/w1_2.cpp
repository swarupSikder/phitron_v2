//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<int> a(n);
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //sum array
    vector<int> sum(n);
    sum[0] = a[0];
    for(int i=1; i<n ;i++){
        sum[i] = sum[i-1] + a[i];
    }

    //print the sum array
    // for(int i=0; i<n ;i++){
    //     cout<< sum[i] <<" ";
    // }
    // cout<< endl;

    //
    int idx=-1;
    for(int i=1; i<n ;i++){
        int sum_l = sum[i-1];
        int sum_r = sum[n-1] - sum[i];
        //cout<< sum_l <<" "<<sum_r<<endl;
        if(sum_l==sum_r){
            idx = i;
            break;
        }
    }

    cout<< idx <<endl;
    
    return 0;
}