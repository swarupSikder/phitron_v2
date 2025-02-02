//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>> n >> e;
    int mat[n][n];
    //memset(mat, 0, sizeof(mat));
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i==j) mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }

    while(e--){
        int x, y;
        cin>> x >> y;
        mat[x][y] = 1;
    }

    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            cout<< mat[i][j] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}