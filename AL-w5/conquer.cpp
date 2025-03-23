//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }
    int m;
    cin>> m;
    int b[m];
    for(int i=0; i<m ;i++){
        cin>> b[i];
    }



    //main task
    int c[n+m];
    int i=0, j=0, curr=0;

    while(i<n && j<m){
        if(a[i] < b[i]){
            c[curr] = a[i];
            i++;
            curr++;
        }
        else{
            c[curr] = b[j];
            j++;
            curr++;
        }
    }

    while(i<n){
        c[curr] = a[i];
        i++;
        curr++;
    }

    while(j<m){
        c[curr] = b[j];
        j++;
        curr++;
    }
    
    //print
    for(int i=0; i<n+m ;i++){
        cout<< c[i] <<" ";
    }

    return 0;
}

/*
input:
3
2 9 13
4
3 5 7 8

output:
2 3 5 7 8 9 13
*/