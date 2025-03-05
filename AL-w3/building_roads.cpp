//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int leader[100005];
int group_size[100005];

int find(int node){
    //base case
    if(leader[node] == -1) return node;

    int l = find(leader[node]);
    //store the ultimate leader for
    //each traversed node
    leader[node] = l;
    return l;
}

void dsu_union (int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(leader1 != leader2){
        if(group_size[leader1] >= group_size[leader2]){
            leader[leader2] = leader1;
            group_size[leader1] += group_size[leader2]; 
        }
        else{
            leader[leader1] = leader2;
            group_size[leader2] += group_size[leader1];
        }
    }
}

int main(){
    //memory set
    memset(leader, -1, sizeof(leader));
    memset(group_size, 1, sizeof(group_size));

    //input
    int n,e;
    cin>> n >> e;

    while(e--){
        int a,b;
        cin>> a >> b;
        dsu_union(a,b);
    }

    //leader collection & count
    vector<int> l;
    int cnt = 0;

    for(int i=1; i<=n ;i++){
        //cout<< i <<" -> "<< leader[i] <<endl;
        
        if(leader[i]==-1){
            l.push_back(i);
            cnt++;
        }
    }

    //print
    cout<< cnt-1 <<endl;

    for(int i=0; i<l.size()-1 ;i++){
        cout<< l[i] <<" "<< l[i+1] <<endl;
    }

    
    
    return 0;
}