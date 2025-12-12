// Same as 3.Infix to Prefix
#include<iostream>
#include<stack>
using namespace std;
string solve(string val1, string val2, char ch){
    // pre to In
    // infix is : val1 op val2
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main(){
    string s = "-/*+79483"; // Prefix expression
    // we need 1 stack -> values 
    stack<string> val;
    for(int i=s.length()-1;i>=0;i--){
        // check if s[i] is a digit(0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else{ // s[i] is -> *, /, +, -
           // kaam
           string val1 = val.top();
           val.pop();
           string val2 = val.top();
           val.pop();
           string ans = solve(val1,val2,s[i]);
           val.push(ans);
        }
        
    }
    cout<<val.top();
}