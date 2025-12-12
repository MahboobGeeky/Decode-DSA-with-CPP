#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){ // sr-starting row, sc-starting column, er-end row, ec-end column
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc1,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
    // method-2
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row, col-1); // Right
    int downWays = maze2(row-1, col); // Down
    int totalWays = rightWays + downWays;
    return totalWays;
}
void printPath(int sr, int sc, int er, int ec, stair s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){ // destinaton reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // Right
    printPath(sr+1,sc1,er,ec,s+'D'); // Down
}
int main(){
    cout<<maze(1,1,3,3);
    cout<<endl;
    cout<<maze2(3,3);
    cout<<endl;
    printPath(1,1,3,3,"");
}