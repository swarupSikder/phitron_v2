//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int leader[1005];
int group_size[1005];

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

    if(group_size[leader1] >= group_size[leader2]){
        leader[leader2] = leader1;
        group_size[leader1] += group_size[leader2]; 
    }
    else{
        leader[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main(){
    //memory set
    memset(leader, -1, sizeof(leader));
    memset(group_size, 1, sizeof(group_size));
    bool cycle = false;

    int n,e;
    cin>> n >> e;
    while(e--){
        int a,b;
        cin>> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB) cycle = true;
        else dsu_union(a,b);
    }

    (cycle)? std::cout<<"Cycle"<<endl : std::cout<<"No Cycle"<<endl;
    
    return 0;
}