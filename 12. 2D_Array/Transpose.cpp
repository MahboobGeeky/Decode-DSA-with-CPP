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
    cout<<endl;
    // print
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // printing transpose
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}