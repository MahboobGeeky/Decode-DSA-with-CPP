#include<iostream>
#include<vector>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size(); // no of vertices
        int v = 0;
        queue<int> q;
        vector<int> visited(n,0);
        vector<int> ans;
        q.push(v);
        visited[v] = 1;
        
        while(q.size()>0){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int ele : adj[node]){
                if(visited[ele]==0){
                    q.push(ele);
                    visited[ele] = 1;
                }
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> adj = {
        {2,3,1},
        {0},
        {0,4},
        {0},
        {2}
    };
    vector<int> ans = bfs(adj);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    
}