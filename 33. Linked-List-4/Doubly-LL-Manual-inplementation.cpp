#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node* prev; // extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // extra for DLL
    }
};
// Normal Display Function:
void display(Node* head){ // O(1) space
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
// Recursively Display:
void displayRec(Node* head){ // O(n) space
    if(head==NULL) return;
    cout<<head->next<<" ";
    displayRec(head->next);
}
// Recursively Display In Reverse Order:
void displayRecRev(Node* head){ // O(n) space
    if(head==NULL) return;
    displayRecRev(head->next);
    cout<<head->val<<" ";
}
// Display via Tail Node: 
void displayRev(Node* tail){ //S.C = O(1)
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    // 10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    displayRev(e);
}