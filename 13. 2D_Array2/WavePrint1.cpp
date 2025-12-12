#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of 1st matrix";
    cin>>m;
    int n;
    cout<<"enter cols of 1st matrix";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // wave print 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 
}