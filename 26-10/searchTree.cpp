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
bool serchBst(Node* root, int val){
    if(root == NULL)
        return false;

    if(root->data == val)
        return true;

    if(val < root->data)
        return serchBst(root->left, val);
    else
        return serchBst(root->left, val);
}