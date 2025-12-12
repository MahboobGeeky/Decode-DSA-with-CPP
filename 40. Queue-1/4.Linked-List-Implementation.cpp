#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is Empty!";
            return;
        }
        Node* temp = head;
        head = head->next;
        size--;
        delete(temp); // wastage nhi ho rhi h
    }
    int front(){
        if(size==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;  
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    Queue q;
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.display(); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.push(60); // 10 20 30 40 50 60
    q.display(); // 10 20 30 40 50
    q.pop();  // 20 30 40 50 60
    q.display();  // 10 20 30 40 50 60

}