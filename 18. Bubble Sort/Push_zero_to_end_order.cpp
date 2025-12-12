#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,-4,0,3,8,12};
    int n = sizeof(arr);
    // print array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // bubble sort
    for(int i=0; i<n-1; i++){  // n-1 passes
        // traverse
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);  // swap
            }
        }
    }

    // print array
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}