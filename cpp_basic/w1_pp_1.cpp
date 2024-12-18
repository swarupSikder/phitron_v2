//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void get_array(int n){
    int* a = new int[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    for(int i=0; i<n ;i++){
        cout<< a[i];
        (i!=n-1)? std::cout<<" " : std::cout<<"\n";
    }
}

int main(){
    int n;
    cin>> n;

    get_array(n);

    
    return 0;
}