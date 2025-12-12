#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; // MaxHeap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop(); // 81 is removed
    cout<<pq.top()<<endl; // 25
}