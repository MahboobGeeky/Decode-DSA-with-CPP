#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows/columns : ";
    cin>>m;
    // input
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // printing
    for(int i=0;i<=m-1;i++){ // rows
        for(int j=0;j<=m-1;j++){ // columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for(int i=0;i<=m-1;i++){
        // swaping of i,j and j,i
        for(int j=i+1;j<=m-1;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout<<endl;
    // printing
    for(int i=0;i<=m-1;i++){ // rows
        for(int j=0;j<=m-1;j++){ // columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
}