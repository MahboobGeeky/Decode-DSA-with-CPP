#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f; // front
    int b; // back
    int s; // size
    vector<int> arr;
    Queue(int val) { // val -> size
        f = 0;
        b = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is FULL"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int top(){
        return arr[f];
    }
    int back(){
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    // Queue q; 
    Queue q(5);
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.display(); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.push(60); // Queue is full
    q.display(); // 10 20 30 40 50
    q.pop();  // 20 30 40 50 60
    q.display();  // 10 20 30 40 50 60

}