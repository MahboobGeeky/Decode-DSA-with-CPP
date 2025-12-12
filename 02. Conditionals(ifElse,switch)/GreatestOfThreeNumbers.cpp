#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number x : ";
    cin>>x;
    int y;
    cout<<"enter a number y : ";
    cin>>y;
    int z;
    cout<<"enter a number z : ";
    cin>>z;
    if(x>y && x>z){
        cout<<"x is greater";
    }
    if(y>x && y>z){
        cout<<"y is greater";
    }
    if(z>x && z>y){
        cout<<"z is greater";
    }
    return 0;
}