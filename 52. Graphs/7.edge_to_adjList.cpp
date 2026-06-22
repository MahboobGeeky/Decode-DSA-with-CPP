#include<iostream>
#include<vector>
using namespace std;

void edgeToAdj(int edges[4][2], int n, vector<vector<int>> &adj){
    for(int i = 0; i < n; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

int main(){
    int edges[4][2] = {{0,1}, {0,2}, {1,2}, {2,3}};

    int n = sizeof(edges) / sizeof(edges[0]); // number of edges = 4

    vector<vector<int>> adj(4); // number of vertices = 4

    edgeToAdj(edges, n, adj);

    for(int i = 0; i < adj.size(); i++){
        cout << i << " -> ";
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}