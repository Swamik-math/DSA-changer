#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int longestSubString(string s){

    unordered_set<char> st;

    int  l= 0;
    int maxlen = 0;

    for(int r=0; r<s.length(); r++){

        // if current character already exists in the window
        // time complexity = O(n)

        while(st.count(s[r])){ 
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);

        maxlen = max(maxlen, r-l+1);
    }
    return maxlen;
}

vector<int> sumOfTwoNumber(vector<int>& num,int target ){
    sort(num.begin(), num.end());
    int n = num.size();
    int l = 0;
    int r = n-1;

    while (l<r){
        int sum = num[l] + num[r];

        if(sum == target)
            return {l+1, r+1};
        else if(sum < target)
            l++;
        else
            r--;
    }

    return {};
}



int main(){

    string str = "mnopqkjhakjqkjsawmdmnavuanmdca";

    // cout << longestSubString(str) << endl;
    vector<int> nums = {2,7,11,15};

    vector<int> result = sumOfTwoNumber(nums, 9);
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

}