#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){    // constructor -> 
            data = val;
            left = right = NULL;
        }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){

    idx++;

    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;

}

// preorder traversal
void pretravel(Node* root){
    if(root == NULL) return;

    cout << root->data << " ";
    pretravel(root->left);
    pretravel(root->right);
}


void intravel(Node* root){
    if(root == NULL) return;

    intravel(root->left);
    cout << root->data << " ";
    intravel(root->right);
}

void posttravel(Node* root){
    if(root == NULL) return;

    posttravel(root->left);
    posttravel(root->right);
    cout << root->data << " ";
}

int main() {

    vector<int> preorder = {1, 2, -1, -1, 3, 5, -1, -1, 4, -1, -1};

    Node* root = buildTree(preorder);

    pretravel(root);
    cout << endl;
    intravel(root);
    cout << endl;
    posttravel(root);
    cout << endl;

    // cout << root->data << endl;
    return 0;
}