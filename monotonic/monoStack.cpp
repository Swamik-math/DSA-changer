#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int>& arr){

    int n = arr.size();
    // int i=0;
    // int j=n-1;

    vector<int> ans(n);
    stack<int> st;
    
    for(int i=n-1; i>=0; i--){

        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }

        if(st.empty())
            ans[i] = -1;
        
        else
            ans[i] = st.top();
        
        st.push(arr[i]);
    }
    return ans;
}