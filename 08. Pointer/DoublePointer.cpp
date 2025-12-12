#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<&x<<endl; // 5
    cout<<*ptr<<endl; // 5
    cout<<**p<<endl; // 5
    cout<<*p<<endl; // x ka address;
}