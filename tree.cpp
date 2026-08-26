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

//level order traversal

void leveltravel(Node* root){
    // we use the queue
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
     

        if(curr == NULL){    // to print the elements in the level order  - to print in the next line 
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
cout << endl;

}

/*

tree mostly uses the recursion again and again


*/

//height of the tree
int height(Node* root){

    if(root == NULL) return 0;

    int leftht = height(root->left);
    int rightht = height(root->right);

    return max(leftht, rightht) + 1;
}

int noNodes(Node* root){
    if(root == NULL) return 0;

    int leftcount = noNodes(root->left);
    int rightcount = noNodes(root->right);

    return leftcount + rightcount + 1;
}

int Nodsum(Node* root){

    if(root == NULL) return 0;

    int lefsum = Nodsum(root->left);
    int rigsum = Nodsum(root->right);

    return lefsum + rigsum + root->data;
}

int main() {

    vector<int> preorder = {1, 2, -1, -1, 3, 5, -1, -1, 4, -1, -1};

    Node* root = buildTree(preorder);

    // pretravel(root);
    // cout << endl;
    // intravel(root);
    // cout << endl;
    // posttravel(root);
    // cout << endl;
    // leveltravel(root);

    // cout << root->data << endl;

    cout << height(root) << endl;
    cout << noNodes(root) << endl;
    cout << Nodsum(root) << endl;
    return 0;
}

// the time complexity is -> O(n)