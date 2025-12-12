#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
        // output:-
    // 0x7fff568a4840
    // 0x7fff568a4844
    // 0x7fff568a4848
    // 0x7fff568a484c
    // 0x7fff568a4850

}