#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
/*
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "raghav";
    p1.second = 76;

    pair<string,int> p2;
    p2.first = "mahboob";
    p2.second = 34;

    pair<string,int> p3;
    p3.first = "thomas";
    p3.second = 62;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
*/
    // better method
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "raghav";
    p1.second = 76;
    m.insert(p1);

    m["mahboob"] = 15;
    m["thomas"] = 87;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("thomas");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
}