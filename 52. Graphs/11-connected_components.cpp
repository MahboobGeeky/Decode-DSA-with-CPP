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

void dfs(int node, unordered_set<int>& visited ){
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if( not visited.count(neighbor)){
            dfs(neighbor, visited);
        }
    }
}
// connected componenets function
int connected_components() {
    int result = 0; // count
    unordered_set<int> visited;
    for(int i=0; i<v; i++){
        // go to every vertex
        // if from a vertex we can initialize a dfs, we got one more connectec component
        if(visited.count(i)==0){ // not found / not visited
            result++;
            dfs(i, visited);
        }
    }
    return result;

    


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
    cout<<connected_components()<<"\n";

    return 0;
}