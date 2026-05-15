#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;

int v; // no of vertices
void add_adge(int src, int dest, int wt, bool bi_dir = true){
    graph[src][dest] = wt;
    if(bi_dir){
        graph[dest][src] = wt;
    }
}


bool dfs(int curr, int end ){
    visited.insert(curr); // mark visited
    for(auto neighbour : graph[curr]){
        if(not visited.count(curr)){
            bool result = dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src, int dest) {
    return dfs(start,end);
}


int main() {
    cin>>v;
    graph.resize(v, unordered_map<int,int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d, wt;
        cin>>s>>d>>wt;
        add_adge(s, d, wt);

    }

    int x, y;
    cin>>x>>y;
    cout<<anyPath(x,y)<<" \n";

    return 0;
}