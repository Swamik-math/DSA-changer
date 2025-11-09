#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(12);
    s.push(3);
    s.push(4);
    s.push(5);

    stack<int> s2;
    s2.swap(s);

    // while(!s2.empty()){
    //     cout << s.top()  << " ";
    //     s.pop();
    cout << "s size = " << s.size() << endl;
    cout << "s size = " << s2.size() << endl;
    // }
    cout << endl;
    
    return 0;

}

/*
STACK- 
    A stack is a datastructure thet folllow LIFO.

    st.push()
    st.top()
    st.pop()
    st.empty()
  
    stack<int> s;
*/