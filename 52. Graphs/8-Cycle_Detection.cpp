#include <bits/stdc++.h>

class Solution {
  public:
    bool detectCycle(int src, vector<int> adj[], vector<bool> &vis){
        vis[src] = true;
        queue<pair<int,int>> q; // <node,parent>
        q.push({src,-1});
        while(q.size()>0){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto ele : adj[node]){
                if(!vis[ele]) {
                    q.push({ele,node});
                    vis[ele] = true;
                }else if(ele!=parent){
                    return true;
                }
            }
        }
        return false;
        
        
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        // step-1: edge to adj list
        vector<int> adj[V]; // V arrays 
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // step-2: detect cycle:-
        vector<bool> vis(V, false);
        for(int i=0; i<V; i++){
            if(!vis[i]) {
                if(detectCycle(i, adj, vis)) return true;
            }
            
        }
        return false;

        
        
    }
};
