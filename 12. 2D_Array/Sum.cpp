#include<iostream>
#include<climits>
using namespace std;
int main(){ 
     int m;
    cout<<"Enter the nu of rows : ";
    cin>>m;
    int n; 
    cout<<"Enter the no of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int max = INT_MIN;
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
}