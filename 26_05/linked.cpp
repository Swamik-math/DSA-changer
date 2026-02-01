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

void instAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    
        temp->next = n;
}


// insert the value at required location in the linked_list
void instAtPos(Node* &head, int pos, int val){
    // & it denotes the address of the "head variable."

    if(pos == 1){
        instAtStart(head, val);
        return;
    }

    Node* temp = head;
    for(int i=0; i< pos-1; i++)
        temp = temp->next;

    Node* n = new Node(val);
    n->next = temp->next;
    temp->next = n;
}

void deleteAtSt(Node* &head){
    if(head == NULL) return;
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteAtEnd(Node* &head){
    if(head == NULL) return;
    
    // if only single
    if(head-> next == NULL){
        delete head;
        head = NULL;
        return;
    }
    // if multiple nodes are present
    Node* curr = head;

    while(curr->next->next != NULL){
        curr = curr->next;
    }

    delete curr->next;
    curr->next = NULL;

}

// delete the last node using the 2 pointer approach *
void deleteAtEnd2Pointer(Node* &head){
    if(head == NULL) return;
    
    // if only single
    if(head-> next == NULL){
        delete head;
        head = NULL;
        return;
    }
    // if multiple nodes are present
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }

    delete curr->next;
    prev->next = NULL;

}


// delete by the value

void deleteByVal(Node* &head, int val){
    if(head == NULL) return;

    if(head->data == val){
        deleteAtSt(head);
        return;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data != val)
        temp = temp->next;
    
    if(temp->next == NULL) return;

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}


int main(){

    Node* head = new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);

    printList(head);
    return 0;
}