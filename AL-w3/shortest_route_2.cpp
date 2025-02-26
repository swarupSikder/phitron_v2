//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e,q;
    cin>> n >> e >> q;

    long long adj_mat[n+5][n+5];

    //memory set for dis matrix
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=n ;j++){
            if(i==j) adj_mat[i][j] = 0;
            else adj_mat[i][j] = LLONG_MAX;
        }
    }

    while(e--){
        long long a,b,c;
        cin>> a >> b >> c;
        adj_mat[a][b] = min(c, adj_mat[a][b]);
        adj_mat[b][a] = min(c, adj_mat[b][a]);
    }

    //floyd-warshall
    for(int k=1; k<=n ;k++){
        for(int i=1; i<=n ;i++){
            for(int j=1; j<=n ;j++){
                if(adj_mat[i][k]!=LLONG_MAX && adj_mat[k][j]!=LLONG_MAX && adj_mat[i][k]+adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k]+adj_mat[k][j];
                }
            }
        }
    }

    while(q--){
        int src, dst;
        cin>> src >> dst;

        if(adj_mat[src][dst] == LLONG_MAX) cout<< -1 <<endl;
        else cout<< adj_mat[src][dst] <<endl;
    }
    
    return 0;
}