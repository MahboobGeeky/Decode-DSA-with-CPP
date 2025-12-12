#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

// Q-1. Product of all values in Binary Tree
int Product(Node* root){
    if(root==NULL) return 1;
    return (root->val)* Product(root->left) * Product(root->right);
}

// Q-2. min value in Binary Tree
int MinVal(Node* root){
    if(root==NULL) return INT_MAX;
    int Lmin = MinVal(root->left);
    int Rmin = MinVal(root->left);
    return min(root->val, min(Lmin,Rmin));
}

// Q-3. Balanced Binary Tree [Leetcode 110]1
// Q-4. Symmetric Tree [LeetCode 101]

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    cout<<Product(a);
    cout<<endl;
    cout<<MinVal(a);

}