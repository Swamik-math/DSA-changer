#include <bits/stdc++.h>
using namespace std;



class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    Node* sortedMerge(Node* h1, Node* h2) {
        // code here
        Node dummy(0);
        Node* tail = &dummy;
        
        while(h1 && h2){
            
            if( h1->data <= h2->data){
                tail->next = h1;
                h1 = h1->next;
            }
            else{
                tail->next = h2;
                h2 = h2->next;
            }
            tail = tail->next;
        }
        
        if(h1) tail->next = h1;
        if(h2) tail->next = h2;
        
        return dummy.next;
    }
};

int main() {
    return 0;
}