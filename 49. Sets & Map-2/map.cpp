#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // Unordered Map:-
    // Stores key-value pairs
    // Order is NOT guaranteed
    // Implemented using Hash Table (average O(1) operations)

    unordered_map<string,int> um;
    um["Thomas"] = 90;
    um["Professor"] = 87;
    um["Mahboob"] = 34;

    // Printing unordered_map
    for(auto p : um){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    unordered_map<int,int> um1;
    um1[2] = 10;
    um1[1] = 20;
    um1[3] = 30;

    // Order may change every time you run the program
    for(auto x : um1){
        cout << x.second << " ";
    }

    return 0;
}
