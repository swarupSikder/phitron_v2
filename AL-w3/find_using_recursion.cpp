//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int leader[1005];

int find(int node){
    //base case
    if(leader[node] == -1) return node;

    int l = find(leader[node]);
    //store the ultimate leader for
    //each traversed node
    leader[node] = l;
    return l;
}

int main(){
    //memory set
    memset(leader, -1, sizeof(leader));
    leader[0] = 1;
    leader[1] = -1;
    leader[2] = 1;
    leader[3] = 1;
    leader[4] = 5;
    leader[5] = 3;

    cout<< find(5) <<endl;

    for(int i=0; i<6 ;i++){
        cout<< i <<" -> "<< leader[i] <<endl;
    }
    
    return 0;
}