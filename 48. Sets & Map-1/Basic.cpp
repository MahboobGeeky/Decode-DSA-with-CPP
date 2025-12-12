#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(8);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(8);
    cout<<s.size()<<endl;// set stores unique elements
    // printing elements of set
    // for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    s.erase(2);
    for(int ele : s){
        cout<<ele<<" ";
    }
    // Searching in set
    int target = 4;
    // s.find() -> it searches in the set, and
    // if it is not found then it returns the last element
    if(s.find(target)!=s.end()){ // target exists
        cout<<"exists"<<endl;
    }
    else cout<<"does not exist"<<endl;

}