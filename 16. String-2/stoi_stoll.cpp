#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "12345";
    int x = stoi(str);  // string to integer
    cout<<x;

    string str1 = "123456789123";
    long long y = stoll(str1);
    cout<<y;
}
