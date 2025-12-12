#include<iostream>
#include<string>
using namespace std;
// Generating Binary String :-
// int n = 3; // global variable
// void generate(string s){
//     if(s.length()==n){
//         cout<<s<<endl;
//         return;
//     }
//     generate(s+'0');
//     generate(s+'1');
// }

// Generating Binary String without consecutives 1
void generate(string s, int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0') generate(s+'1',n-1);
}
int main(){
    int n = 4;
    generate("",n);
}