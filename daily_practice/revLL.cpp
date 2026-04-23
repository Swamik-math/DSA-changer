#include <bits/stdc++.h>
using namespace std;



class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};

Node* reverseList(Node * head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;  // Return prev which is the new head
}


// Display the linked list
void display(Node* head) {
    Node* temp = head;
    cout << "List: ";
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    Node* head = NULL;
    
    // Create linked list
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        Node* newNode = new Node(val);
        
        if(head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    cout << "\nBefore Reverse: ";
    display(head);
    
    // Reverse the list
    head = reverseList(head);
    
    cout << "After Reverse: ";
    display(head);
    
    return 0;
}