//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //sort(a, a+n);                     //asc
    sort(a, a+n, greater<int>());       //desc

    for(int i=0; i<n ;i++){
        cout<< a[i];
        (i!=n-1)? std::cout<<" " : std::cout<<"\n";
    }
    
    return 0;
}