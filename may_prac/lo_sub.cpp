#include <bits/stdc++.h>
using namespace std;

int LongSub(string s){
    unordered_set<char> st;

    int l = 0;
    int ans = 0;

    for(int r=0; r<s.length(); r++){

        while(st.count(s[r])){
            st.erase(s[l]);
            l++;
        }

        st.insert(s[r]);

        ans = max(ans , r - l + 1);
    }
    return ans;
}

int main() {
    return 0;
}