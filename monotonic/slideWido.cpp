#include<iostream>
#include<unordered_set>
using namespace std;

int longestSubString(string s){

    unordered_set<int> st;

    int l =0;
    int maxlen = 0;

    for(int r=0; r<s.length(); r++){

        while(st.count(s[r])) {
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxlen = max(maxlen, r-l+1);
    }
    return maxlen;
}

int main(){
    string s = "abcdefabdklm";

    cout << longestSubString(s) << endl;
    return 0;
}