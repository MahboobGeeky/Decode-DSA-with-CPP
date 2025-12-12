#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // Ordered Set:-
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    for(int ele : s){
        cout<<ele<<" "; 
    }
    cout<<endl;
    // Ordered Map:-
    map<string,int> m; // soring Lexographically
    // sorting is based on key 
    m["Thomas"] = 90;
    m["Professor"] = 87;
    m["Mahboob"] = 34;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<endl;
    map<int,int> m1;
    m1[2] = 10;
    m1[1] = 20;
    m1[3] = 30;
    for(auto x : m1){
        cout<<x.second<<" ";
    }
}