/*
Monotonic stack:
        a stack that maintains order

        -> increasing stack
        -> decreasing stack
    
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;  

    for(int i=n-1; i>=0 ; i--){
        while(!st.empty() && st.top() >= arr[i])
            st.top();

        if(!st.empty())
            ans[i] = st.top();
    }
}