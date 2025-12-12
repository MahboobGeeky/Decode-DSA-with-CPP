// Geeks for geeks question
#include<iostream>
#include<queue>
using namespace std;
class Solution {
  public:
    queue<int> q;
    queue<int> rearrangeQueue(queue<int> q) {
        int n = q.size();
        stack<int> st;
        for(int i=1;i<=n/2;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size()>0){
            q.push(st.top());
            st.pop();
        }
        
        for(int i=1;i<=n/2;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size()>0){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
        // reverse the queue
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size()>0){
            q.push(st.top());
            st.pop();
        }
        return q;
        
    }
    void display(){
        int n = q.size();
        for(int i=1;i<=n;i++){
            int x = q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }
        cout<<endl;
        }
};
int main(){
    Solution s;

}