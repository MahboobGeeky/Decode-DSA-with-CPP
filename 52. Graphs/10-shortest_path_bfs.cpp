#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

int v; // no of vertices
void add_adge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest, vector<int> &dist){
    queue<int> q;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto nb : graph[curr]){
            if(not visited.count(nb)){ 
                q.push(nb);
                visited.insert(nb);
            }
        }
    }
    
}

int main() {

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d;
        cin>>s>>d;
        add_adge(s, d);

    }
    int x, y;
    cin>>x>>y;

    for(auto path : result){
        for(auto ele : path){
            cout<<ele <<" ";
        }
    }
    

    return 0;
}