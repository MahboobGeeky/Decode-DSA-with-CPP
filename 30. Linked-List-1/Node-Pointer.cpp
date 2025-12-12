#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//HEAD SE PURI LINKED LIST PRINT KARANI HAI
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// DISPLAY LINKED LIST RECURSIVELY
void displayRec(Node* head){
    if(head==NULL) return; // base case
    cout<<head->val<<" "; // kaam
    display(head->next); // call
}

// DISPLAY LINKED LIST in REVERSE ORDER
void displayRec(Node* head){
    if(head==NULL) return; // base case
    display(head->next); // call
    cout<<head->val<<" "; // kaam 
}

int main(){
    // 10 20 30 40
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;    // a->next == (*a).next
    b->next = c;
    c->next = d;
    // Display Linked List
    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl; 

    // c ki value print karni h?
    cout<<a->next->next->val;
    cout<<endl;

    // DISPLAY LINKED LIST
    display(a);

    // DISPLAY LINKED LIST RECURSIVELY
    displayRec(a);

    // SIZE OF LINKED LIST
    int n = 0;
    Node* temp = a;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    cout<<"size of linked list is : "<<n<<endl; // 4


}