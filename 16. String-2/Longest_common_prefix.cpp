// Q.-> leetcode 14
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  //  ["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    // print vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    sort(v.begin(),v.end()); // lexographically (sorting according to ASCII value)
    // print vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    // now compare perform operation on first and last string and get longest common prefix
    // leetcode solution :->

    //     string longestCommonPrefix(vector<string>& strs) {
    //     int n = strs.size();
    //     if(n==1) return strs[0];
    //     sort(strs.begin(),strs.end());
    //     string first = strs[0];
    //     string last = strs[n-1];
    //     string s = "";
    //     for(int i=0;i<(min(first.size(),last.size()));i++){
    //         if(first[i]==last[i]){
    //             s += first[i];
    //         }
    //         else return s;
    //     }
    //     return s;
    // }
    

}
