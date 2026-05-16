#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    
    void dfsTraversal(int start, vector<int>& result, vector<vector<int>>&adj, vector<bool>&visited){
        visited[start] = true;
        result.push_back(start);
        
        for(int node : adj[start]){
            if(!visited[node]){
                dfsTraversal(node,result,adj,visited);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here 
        int n = adj.size();
        vector<bool> visited(n, false);
        vector<int> result;
        int start = 0;
        dfsTraversal(start, result, adj, visited);
        return result;
        
    }
};
 
 
int main(){
    // adjacency list
    vector<vector<int>> adj = {
        {2, 3, 1},
        {0},
        {0, 4},
        {0},
        {2}
    };

    Solution obj;

    vector<int> ans = obj.dfs(adj);

    cout << "DFS Traversal: ";

    for (int node : ans) {
        cout << node << " ";
    }

    return 0;

}
