// Same as 3.Infix to Prefix
#include<iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "-/*+79483"; // Prefix expression
    // Prefix Evaluation:-
    // we need 1 stack -> values 
    stack<int> val;
    for(int i=s.length()-1;i>=0;i--){
        // check if s[i] is a digit(0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else{ // s[i] is -> *, /, +, -
           // kaam
           int val1 = val.top();
           val.pop();
           int val2 = val.top();
           val.pop();
           int ans = solve(val1,val2,s[i]);
           val.push(ans);
        }
        
    }
    cout<<val.top();
}