#include <bits/stdc++.h>
using namespace std;

// Node class for a singly linked list.
// Each node stores an integer value and a pointer to the next node.
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};

// Floyd's Cycle Detection Algorithm (Tortoise and Hare).
// slow moves 1 step at a time, fast moves 2 steps at a time.
// If there is a cycle, they will eventually meet.
// If fast reaches NULL, the list has no cycle.
bool loopLL(Node* head){
    Node* slow = head;
    Node* fast = head;

    // If loop doesn't exist then fast (or fast->next) becomes NULL.
    // That is the stopping condition for "no cycle".

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Edge case: invalid size.
    // For n <= 0, we treat the list as empty.
    if (n <= 0) {
        cout << "No loop exists (empty list).\n";
        return 0;
    }
    
    Node* head = NULL;
    Node* tail = NULL;
    
    // Build the linked list from input values.
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        Node* newNode = new Node(val);
        
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Input for loop creation:
    // pos = 0  -> no loop
    // pos = k  -> connect tail to the k-th node (1-based index)
    int pos;
    cout << "Enter loop position (0 for no loop, 1 to " << n << " to create loop): ";
    cin >> pos;

    if (pos >= 1 && pos <= n) {
        Node* loopStart = head;

        // Move (pos - 1) steps to reach the target node.
        for (int i = 1; i < pos; i++) {
            loopStart = loopStart->next;
        }

        // Create cycle by connecting tail back to loopStart.
        tail->next = loopStart;
    }
    
    // Check whether the linked list has a cycle.
    bool hasLoop = loopLL(head);

    if (hasLoop) {
        cout << "Loop exists in the linked list.\n";
    } else {
        cout << "No loop exists in the linked list.\n";
    }
    
    return 0;
}