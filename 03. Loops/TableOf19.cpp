#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=n; i<=10*n;i=i+n) {
         cout<<i<<endl;
    } 
    return 0;
}  