#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > pq; // MinHeap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop(); // -6 is removed
    cout<<pq.top()<<endl; // 2
}