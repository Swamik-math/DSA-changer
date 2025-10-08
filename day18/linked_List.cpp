/*

linked list is a linear DAS structure in which elements are connected using pointers.

pointer -> reference to the next node.

class Node:
    def_init_(self, data):
        self.data = data    (store value)
        self.next = None    (store address of the next node)

TYPES OF LINKED LIST:
    single linked list
    doubly linked list
    circular linked list

ADVANTAGES:
dynamic memory allocation
easy insert and deletion


-> Common Interview Questions
Reverse a linked list
Detect a loop in a linked list (Floyd’s Cycle Detection)
Find the middle element
Merge two sorted linked lists
Remove duplicates
Delete nth node from end

*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Linked_list{
    public:
    Node* head;

    Linked_list(){
        head = nullptr;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);

        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    Linked_list list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    return 0;
}