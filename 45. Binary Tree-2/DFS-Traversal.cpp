#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// 1. Preorder Traversal
void PreOrder(Node* root){
    if(root==NULL) return; // base case
    cout<<root->val<<" "; // root
    PreOrder(root->left); // left
    PreOrder(root->right); // right
}
// 2. Inorder Traversal
void InOrder(Node* root){
    if(root==NULL) return; // base case
    InOrder(root->left); // left
    cout<<root->val<<" "; // root 
    InOrder(root->right); // right
}
// 3. Postorder Traversal
void PostOrder(Node* root){
    if(root==NULL) return; // base case
    InOrder(root->left); // left
    InOrder(root->right); // right
    cout<<root->val<<" "; // root 
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    // connections
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right =g;
    PreOrder(a);
    cout<<endl;
    InOrder(a);
    cout<<endl;
    PostOrder(a);

}