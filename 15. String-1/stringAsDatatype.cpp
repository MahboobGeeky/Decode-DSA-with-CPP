#include<iostream>
using namespace std;
int main(){
    string str = "Mahboob";
    cout<<str;
    string name;
    // cin>>name; // only if the given string has no sapces
    getline(cin,name); // include spaces (a sentance)
    cout<<name;
    
}