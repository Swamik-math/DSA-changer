#include<iostream>
#include<stack>
using namespace std;

// STACK OPERATION
// push(n)
// pop()
// top()
// size()

class Stack{
    int arr[100];
    int topIndex;

public :
     Stack(){
        topIndex = -1;
     }

     void push(int x){
        arr[++topIndex] = x;
     }

     void pop(){
        topIndex--;
     }

     int top(){
        return arr[topIndex];
     }

     bool empty(){
        return topIndex == -1;
     }
};


int main(){
    stack<int> st;

    st.push(10);
    st.push(30);
    st.push(20);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;
}