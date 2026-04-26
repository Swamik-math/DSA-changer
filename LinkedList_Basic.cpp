#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
    
public:
    // Constructor
    LinkedList() {
        head = NULL;
    }
    
    // Insert at beginning
    void insertAtBeg(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    // Insert at position (0-indexed)
    void insertAtPos(int val, int pos) {
        if (pos == 0) {
            insertAtBeg(val);
            return;
        }
        
        Node* newNode = new Node(val);
        Node* temp = head;
        
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        
        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    // Delete from beginning
    void deleteAtBeg() {
        if (head == NULL) return;
        
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    // Delete from end
    void deleteAtEnd() {
        if (head == NULL) return;
        
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }
    
    // Display linked list
    void display() {
        Node* temp = head;
        cout << "List: ";
        
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    // Destructor
    ~LinkedList() {
        while (head != NULL) {
            deleteAtBeg();
        }
    }
};

int main() {
    LinkedList ll;
    
    // Insert elements
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtBeg(5);
    ll.insertAtPos(15, 2);
    
    ll.display();  // Output: List: 5 -> 10 -> 15 -> 20 -> 30 -> NULL
    
    // Delete operations
    ll.deleteAtBeg();
    ll.display();  // Output: List: 10 -> 15 -> 20 -> 30 -> NULL
    
    ll.deleteAtEnd();
    ll.display();  // Output: List: 10 -> 15 -> 20 -> NULL
    
    return 0;
}
