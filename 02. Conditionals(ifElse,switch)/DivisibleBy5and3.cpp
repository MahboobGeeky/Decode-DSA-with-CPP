#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Number is divisable by 5 and 3";
    }
    else{
        cout<<"Number is not divisable by 5 and 3";
    }
  return 0;  
}