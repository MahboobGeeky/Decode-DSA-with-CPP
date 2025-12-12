#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Deque{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;//extra
            head = temp;
        }
        size++;
    }
    // DELETE AT HEAD
    void popFront(){
        if(size==0){
            cout<<"Lest is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL; //extra
        if(head==NULL) tail = NULL; //extra
        size--;
    }
    // DELETE AT TAIL
    void popBack(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }else if(size==1){ //extra
            popBack();
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // 
        tail = temp; //
        size--;
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
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack(); 
    dq.display(); 
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
    cout<<dq.front()<<endl;
    


}