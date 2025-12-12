#include<iostream>
using namespace std;
// method-2: 
int max_power_of_2(int n){
    n = n | (n >> 1); // right shift operator
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n+1)>>1; // (n+1)/2
}
int main(){
    int x = 90;
    int temp;
    // method-1:
    while(x!=0){
        temp = x;
        x = x & (x-1);
    }
    cout<<temp<<endl;
    int y = 90;
    cout<<max_power_of_2(y)<<endl;
    return 0;
}