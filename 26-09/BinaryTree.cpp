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
void levelOrder(Node* root){
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

int height(Node* root){
    if(!root) return 0;
    return 1+max(height(root->left), height(root->right));
}

int countNodes(Node* root){
    if(!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

    /*
         1
       /   \
      2     3
     / \   / \
    4   5 6   7
    */

    Node* createTree(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);

        return root;
    }

int main(){
 Node* root = createTree();
    
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
    
    cout << "Level Order Traversal: ";
    levelOrder(root);
    cout << endl;
    
    cout << "Height of tree: " << height(root) << endl;
    cout << "Total nodes: " << countNodes(root) << endl;

    return 0;
}
