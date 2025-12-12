#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,3,6,8,5,8,3,1,7,5,2,5,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
        // other way- 
    int n = sizeof(arr)/4;
    cout<<n;
}