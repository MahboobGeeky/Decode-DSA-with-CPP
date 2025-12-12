#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void removeAtEven(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){ // element is odd
            int x = q.front();
            q.pop();
            q.push(x);
        }else{ // element is even
            q.pop();
        }
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    removeAtEven(q);
    display(q);

}