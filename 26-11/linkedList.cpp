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

bool searchBST(Node* root, int key){
    if(root == NULL)
        return false;
    
    if(root->data == key)
        return true;

    if(key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int maxNode(Node* root){
    while(root->left != NULL)
        root = root->left;
    return root->data;
}

int minNode(Node* root){
    while(root->right != NULL)
        root = root ->right;
    return root->data;
}


Node* deleteBST(Node* root, int key){
    if(root == NULL)
        return root;

    if(key < root->data)
        root->left = deleteBST(root->left, key);
    else if(key > root->data)
        root->right = deleteBST(root->right, key);
    else {
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        int successor = minNode(root->right);
        root->data = successor;
        root->right = deleteBST(root->right, successor);
    }
    return root;
}