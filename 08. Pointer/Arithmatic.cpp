#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    cout<<ptr<<endl; // 0x7fff55b3789c
    ptr = ptr + 1; 
    cout<<ptr<<endl; // 0x7fff55b378a0
}