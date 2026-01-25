#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// to print the list   O(n)
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL){
        cout << temp-> data << "->";
        temp = temp-> next;
    }
    cout << "NULL" << endl;
}

// insert the number at the begining  O(1)
Node* insertAtBegining(Node* head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    return newNode;
}

// insert the number at the end
Node* insertAtEnd(Node* head, int data){
    Node* newNode = new Node(data);

    if(head == NULL)
        return newNode;

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp-> next;
    }
    temp->next = newNode;
    return head;
}

// reverse then list 
Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){

    Node* head = NULL;
    head = insertAtBegining(head, 10);
    head = insertAtBegining(head, 20);
    head = insertAtEnd(head, 31);
    head = insertAtEnd(head, 32);

    printList(head);

    head = reverseList(head);
    printList(head);

    return 0;
}

