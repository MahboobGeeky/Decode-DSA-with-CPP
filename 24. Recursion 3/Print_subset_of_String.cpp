#include<iostream>
#include<string>
#include<vector>
using namespace std;
// print SUBSET
void printSubset(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}
// store SUBSET
void storeSubset(string ans, string original, vector<string>&v){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v);
    storeSubset(ans+ch,original.substr(1),v);
}
int main(){
    string str = "abc";
    // print subset
    printSubset("",str);
    // store subset
    vector<string> v;
    storeSubset("",str,v);
    // print this stored subsets
    for(string ele : v){
        cout<<ele<<endl;
    }

}