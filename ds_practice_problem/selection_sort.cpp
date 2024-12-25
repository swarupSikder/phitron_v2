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

    //sort
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(a[j]>a[i]){
                swap(a[i], a[j]);
            }
        }
    }

    //print
    for(int i=0; i<n ;i++){
        cout<< a[i] <<" ";
    }

    
    return 0;
}