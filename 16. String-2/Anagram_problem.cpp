// Q.-> Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//  ip-> s = physicswallah,  t = wallahphysics
//   op ->  YES
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t) cout<<true;
        else cout<<false;
    
} 