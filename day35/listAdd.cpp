#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {

            int x = (l1 ? l1->val : 0);
            int y = (l2 ? l2->val : 0);

            int sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy->next;
    }
};

// Function to build a linked list from vector
ListNode* buildList(vector<int> &v) {
    if (v.empty()) return NULL;

    ListNode* head = new ListNode(v[0]);
    ListNode* temp = head;

    for (int i = 1; i < v.size(); i++) {
        temp->next = new ListNode(v[i]);
        temp = temp->next;
    }
    return head;
}

// Function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n1, n2;

    // Input for list 1
    cout << "Enter number of digits in list 1: ";
    cin >> n1;

    cout << "Enter elements of list 1 in reverse order: ";
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++) cin >> v1[i];

    // Input for list 2
    cout << "Enter number of digits in list 2: ";
    cin >> n2;

    cout << "Enter elements of list 2 in reverse order: ";
    vector<int> v2(n2);
    for (int i = 0; i < n2; i++) cin >> v2[i];

    // Build lists
    ListNode* l1 = buildList(v1);
    ListNode* l2 = buildList(v2);

    // Solve
    Solution s;
    ListNode* ans = s.addTwoNumbers(l1, l2);

    // Output
    cout << "Result (in reverse order): ";
    printList(ans);

    return 0;
}
