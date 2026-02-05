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
        while(!st.empty() && st.top() <= arr[i])
            st.pop();

        if(!st.empty())
            ans[i] = st.top();
        
        st.push(arr[i]);
    }
    return ans;
}

// STOCK SPAN PROBLEM
vector<int> stockSpan(vector<int>& price){
    int n = price.size();
    vector<int> span(n);
    stack<int> st;

    for(int i=0; i<n; i++){
        while(!st.empty() && price[st.top()] <= price[i])
            st.pop();

        span[i] = st.empty() ? i+1 : i-st.top();
        st.push(i);
    }
    return span;
}

int main(){

    vector<int> arr = {4, 5, 2, 25};
    vector<int> result = nextGreater(arr);

    cout << "Next greater element :";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}