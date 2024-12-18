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
    for(int i=0; i<n ;i++){
        cout<< sum[i] <<" ";
    }
    cout<< endl;
    
    return 0;
}