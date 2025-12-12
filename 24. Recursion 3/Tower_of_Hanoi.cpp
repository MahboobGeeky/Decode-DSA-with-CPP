#include<iostream>
using namespace std;
void hanoi(int n, char s, char h, char d){ // S H D  source helper destination
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n = 3;
    hanoi(n,'A','B','C');
}