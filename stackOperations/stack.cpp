#include<iostream>
#include<stack>
using namespace std;

// STACK OPERATION
// push(n)
// pop()
// top()
// size()

int main(){
    stack<int> st;

    st.push(10);
    st.push(30);
    st.push(20);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;
}