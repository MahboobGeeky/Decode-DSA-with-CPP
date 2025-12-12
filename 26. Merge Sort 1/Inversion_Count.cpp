// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n); // same as arr, (copy)
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }



#include <iostream>
#include <vector>
using namespace std;

// Merges two sorted subarrays of v
void merge(vector<int>& v,int left,int mid,int right) {
    int n1=mid-left+1;   // size of left half
    int n2=right-mid;    // size of right half

    vector<int> L(n1),R(n2); // temporary arrays

    // copy data to left temp array
    for(int i=0;i<n1;i++)
        L[i]=v[left+i];

    // copy data to right temp array
    for(int j=0;j<n2;j++)
        R[j]=v[mid+1+j];

    int i=0,j=0,k=left;  // pointers for L, R and main array

    // merge both halves in sorted order
    while(i<n1 && j<n2) {
        if(L[i]<=R[j])
            v[k++]=L[i++];
        else
            v[k++]=R[j++];
    }

    // copy remaining elements of L (if any)
    while(i<n1)
        v[k++]=L[i++];

    // copy remaining elements of R (if any)
    while(j<n2)
        v[k++]=R[j++];
}

// Recursively divides the array and sorts it
void mergeSort(vector<int>& v,int left,int right) {
    if(left>=right) return; // base case

    int mid=left+(right-left)/2;

    // sort left half
    mergeSort(v,left,mid);

    // sort right half
    mergeSort(v,mid+1,right);

    // merge sorted halves
    merge(v,left,mid,right);
}

int main() {
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    // copy array into vector
    vector<int> v(arr,arr+n);

    // print before sorting
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // perform merge sort
    mergeSort(v,0,v.size()-1);

    // print after sorting
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
