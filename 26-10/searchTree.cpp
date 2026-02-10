#include<iostream>
#include<vector>
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

// insert into BST
Node* insertBST(Node* root, int key){
    if(root == NULL)
        return  new Node(key);

    if(key < root->data)
        root->left = insertBST(root->left, key);
    else
        root->right = insertBST(root->right, key);
    
    return root;
}

// search in BST
bool serchBst