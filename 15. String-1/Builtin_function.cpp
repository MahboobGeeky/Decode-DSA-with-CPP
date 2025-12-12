#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "mahboob is at ptu";
    // cout<<str.length(); // 0 to str.length()-1
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    cout<<str<<endl;
    str.pop_back();
    str.pop_back();


    // '+' operator
    string s = "abc";
    cout<<s<<endl;
    s = s + "xyz";  // add


    // REVERSE STRING
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}