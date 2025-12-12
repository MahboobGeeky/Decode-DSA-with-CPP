// Same as 5.Postfix-to-Infix
#include<iostream>
#include<stack>
using namespace std;
string solve(string val1, string val2, char ch){
    string s = "";
    s.push_back(ch); // ONE LINE Change
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s = "79+4*8/3-"; // Postfix expr ession
    // Postfix Evaluation:-
    // we need 1 stack -> values 
    stack<string> val;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit(0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else{ // s[i] is -> *, /, +, -
           // kaam
           string val2 = val.top();
           val.pop();
           string val1 = val.top();
           val.pop();
           string ans = solve(val1,val2,s[i]);
           val.push(ans);
        }
        
    }
    cout<<val.top();
}