#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;        
    int maxSum = INT_MIN;
    int maxIdx = -1;
    // Method-1: 
    // for(int i=0;i<=n-k;i++){ // total no of operations = n-k+1
    //     int sum = 0;
    //     for(int j=i;j<i+k;j++){ // k times
    //         sum += arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }

    // Method-2: 
    int prevSum = 0;
    for(int i=0;i<k;i++){ // total no of operation = k
        prevSum += arr[i];
    }
    maxSum = prevSum;
    // sliding window algorithm
    int i = 1;
    int j = k;
    while(j<n){ // total no of operations = n-k
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum<currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
    // for Method-1:
    // total no of operations = (n-k+1)*k
    // time complexity = O(k*n)
    
    // for Method-2:
    // time complexity = O(n)
}