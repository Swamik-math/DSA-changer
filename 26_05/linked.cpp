// Linked list concepts

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
}

void instAtStart(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

int main(){

    Node* head = new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);

    printList(head);
    return 0;
}