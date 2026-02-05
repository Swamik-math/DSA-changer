#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int largeArea(vector<int>& heights){
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for(int i=0; i<=n; i++){
        int currHeight;

        if(i == n){
            currHeight = 0;
        }
        else{
            currHeight = heights[i];
        }

        while(!st.empty() && currHeight < heights[st.top()]){
            int h = heights[st.top()];
            st.pop();

            int right = i;
            int left = st.empty() ? -1 : st.top();
            int width = right - left -1;

            maxArea = max(maxArea, h*width);
        }
        st.push(i);
    }
    return maxArea;
}

int main(){

    vector<int> heights =  {2,1,5,6,2,3};
    int result = largeArea(heights);

    cout << "Largest area rectangele: " << result << endl;

    return 0;
}
