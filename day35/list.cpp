#include<iostream>
#include<vector>

using namespace std;
// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
};

// Remove the n-th node from the end of list and return head
ListNode* deleteNode(ListNode* head, int n){
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    // Move fast n+1 steps so that slow points to node before the one to remove
    for(int i = 0; i <= n; ++i){
        if(fast == nullptr) break;
        fast = fast->next;
    }

    while(fast != nullptr){
        fast = fast->next;
        slow = slow->next;
    }

    // slow->next is the node to delete (if exists)
    ListNode* toDelete = slow->next;
    if(toDelete){
        slow->next = toDelete->next;
        delete toDelete;
    }

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}

// Helper: create linked list from vector
ListNode* createList(const vector<int>& vals){
    if(vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* cur = head;
    for(size_t i = 1; i < vals.size(); ++i){
        cur->next = new ListNode(vals[i]);
        cur = cur->next;
    }
    return head;
}

// Helper: print linked list
void printList(ListNode* head){
    ListNode* cur = head;
    while(cur){
        cout << cur->val;
        if(cur->next) cout << " -> ";
        cur = cur->next;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Simple interactive test:
    // First line: number of elements m
    // Next line: m integers
    // Next line: n (delete n-th from end)

    int m;
    if(!(cin >> m)) return 0;
    vector<int> vals;
    vals.reserve(m);
    for(int i = 0; i < m; ++i){
        int x; cin >> x;
        vals.push_back(x);
    }
    int n; cin >> n;

    ListNode* head = createList(vals);
    head = deleteNode(head, n);
    printList(head);

    // cleanup remaining nodes
    while(head){
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;
}