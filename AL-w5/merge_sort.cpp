//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void conquer(int c[], int l, int mid, int r){
    //input
    int n = mid-l+1;
    int a[n];
    int k = l;
    for(int i=0; i<n ;i++, k++){
        a[i] = c[k];
    }
    int m = r-mid;
    int b[m];
    k = mid+1;
    for(int i=0; i<m ;i++, k++){
        b[i] = c[k];
    }



    //main task
    int i=0, j=0, curr=l;

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
}

void divide(int a[], int l, int r){
    //base case
    if(l >= r) return;

    //recursive call + conquer
    int mid = (l+r)/2;
    divide(a, l, mid);
    divide(a, mid+1, r);
    conquer(a, l, mid, r);
}

int main(){
    //input
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    divide(a, 0, n-1);

    //print
    for(int i=0; i<n ;i++){
        cout<< a[i] <<" ";
    }
    cout<<endl;
    
    return 0;
}

/*
input:
5
30 9 1 7 4

output:
1 4 7 9 30
*/