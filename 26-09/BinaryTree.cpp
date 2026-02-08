// Binary tree

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};


//Tree traversal PREORDER
void preorder(Node* root){
    if(!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// INORDER
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// POSTORDER
void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// LEVEL ORDER TRAVERSAL
int levelOrder(Node* root){
    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
}


int main(){

}
