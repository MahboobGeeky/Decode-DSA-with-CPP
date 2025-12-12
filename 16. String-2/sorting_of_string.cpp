#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end()); // sort according to ASCI value order.
    cout<<s;

    // with spaces
    string s1;
    getline(cin,s1);
    sort(s1.begin(),s1.end());
    cout<<s1;
} 