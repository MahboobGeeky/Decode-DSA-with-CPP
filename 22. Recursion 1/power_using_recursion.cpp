#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0) return 0;
    int p = 1;
    for(int i=1;i<=b;i++){
        p *= a;
    }
    return p;
}
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent : ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is "<<pow(a,b);
    cout<<power(2,4);
}