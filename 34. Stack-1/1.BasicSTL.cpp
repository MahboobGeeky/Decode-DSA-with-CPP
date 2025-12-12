#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40); 
    st.push(50);
    st.pop(); // pop top element
    // PRINTING IN REVERSE ORDER -> emptying the stack
/* while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
*/ 
    // PRINTING ELEMENTS OF STACK -> using extra stack
    // stack khali nhi hoga
    stack<int> temp;
    // putting elements from st to temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }

}