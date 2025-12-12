// input a string of even length and reverse the first half of the string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // reverse first half
    int n = s.length();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}