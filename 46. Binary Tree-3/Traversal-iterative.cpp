#include<iostream>
#include<stack>
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
// Preorder Traversal(iterative) using stack
void Preorder(Node* root){
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        cout<<temp->val<<" ";
        st.pop();
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
}
// Inorder Traversal(iterative) using stack
void Inorder(Node* root){
    stack<Node*> st;
    vector<int> ans;
    Node* node = root;
    while(st.size()>0 || node!=NULL){
        if(node!=NULL){
            st.push(node);
            node = node->left;
        }else{ // node is NULL
            Node* temp = st.top();
            st.pop();
            cout<<temp->val<<" ";
            node = temp->right;
        }
    }
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
    c->right = g;
    cout<<endl;
    Preorder(a);
    cout<<endl;
    Inorder(a);
}