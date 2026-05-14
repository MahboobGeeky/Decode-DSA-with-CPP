#include<iostream>
#include<vector>
#include<list>
using namespace std;
int v;

vector<list<int>> graph;

void addEdge(int src, int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }

}

void display(vector<list<int>>& graph){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<"\n";
    }
}

int main(){
    cin>>v;
    graph.resize(v, list<int> () );
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        addEdge(s,d);
    }

    display(graph);
    
    
}

