#include<iostream>
using namespace std;
    // using C++ builtIn function
int count_set_bits(int n){
    return __builtin_popcount(n);
}
// Brian Kernighan’s Algorithm
int count_set_bits2(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits(13)<<endl;
    cout<<count_set_bits2(13)<<endl;
}