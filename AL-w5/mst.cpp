//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int leader[1005];
int group_size[1005];

class Edge {
    public:
        int a,b,w;
        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

bool cmp(Edge l, Edge r){
    return l.w < r.w;
}

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

    //input
    int n,e;
    cin>> n >> e;
    vector<Edge> edge_list;

    while(e--){
        int a,b,w;
        cin>> a >> b >> w;
        edge_list.push_back(Edge(a,b,w));
    }

    sort(edge_list.begin(), edge_list.end(), cmp);

    //convert to MST
    int total_cost = 0;

    for(auto ed: edge_list){
        int leaderA = find(ed.a);
        int leaderB = find(ed.b);

        if(leaderA != leaderB){
            dsu_union(ed.a, ed.b);
            total_cost += ed.w;
        }
    }

    //print
    cout<< total_cost <<endl;
    
    return 0;
}

/*
input: 
5 7
0 1 2
2 4 4
0 3 3
1 4 5
0 2 3
1 2 7
4 3 6

output: 
12
*/