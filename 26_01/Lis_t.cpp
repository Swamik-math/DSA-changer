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

// delete the node from the begining   O(1)
Node* deleteAtBegining(Node* head){
    if(head == NULL) return NULL;

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// delete from the end
Node* deleteAtEnd(Node* head){
    if(head == NULL || head->next->next == NULL){
        delete head;
        return NULL;
    }

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    delete temp->next;
    temp-> next = NULL;
    return head;
}

// delete by value
Node* deleteByValue(Node* head, int key){
    if(head == NULL) return NULL;

    if(head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    while(curr->next != NULL && curr->next->data != key){
        curr = curr-> next;
    }

    if(curr->next != NULL){
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    return head;

}



int main(){

    Node* head = NULL;
    head = insertAtBegining(head, 10);
    head = insertAtBegining(head, 20);
    head = insertAtEnd(head, 31);
    head = insertAtEnd(head, 32);
    // head = deleteAtBegining(head);
    // head = deleteAtEnd(head);
    head = deleteByValue(head, 10);
    

    printList(head);

    return 0;
}