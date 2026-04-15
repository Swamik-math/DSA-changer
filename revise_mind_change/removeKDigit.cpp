#include <bits/stdc++.h>
using namespace std;



    string removeKdigits(string s, int k) {
        
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            while(!st.empty() && k>0 && st.top()  > s[i]){
                st.pop(); k--;
            }
            st.push(s[i]);

           
        }
         while(k > 0){
                st.pop(); 
                k--;

                if(st.empty()) return "0";
            }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        int i= 0;
        while(i < res.size() && res[i] == '0')
        i++;

        res = res.substr(i);

        if(res.empty()) return "0";

        return res;
    }


int main() {
    string n = "10200";
    string res = removeKdigits(n, 1);
    cout << res << endl;
}