#include<iostream>
#include<stack>
#include<vector>
using namespace std;

        bool isValid(string s){
            stack<char> st;

            for(char ch: s){

                // if opening bracket is present
                if(ch == '(' || ch == '{' || ch == '['){
                    st.push(ch);
                }
                else {
                    // if stack is empty -> invalid
                    if(st.empty()) return false;

                    char top = st.top();
                    st.pop();

                    if(
                        (ch == ')' && top != '(') ||
                        (ch == '}' && top != '{') ||
                        (ch == ']' && top != '[')
                    ) return false;
                }
            }
            return st.empty();
        }

        // next greater element
        vector<int> nextGreater(vector<int>& arr){
            int n = arr.size();
            vector<int> result(n);
            stack<int> st;

            for(int i=n-1; i>= 0; i--){

                while(!st.empty() && st.top() <= arr[i]){
                    st.pop();
                }

                if(st.empty())
                    result[i] = -1;
                else
                    result[i] = st.top();
                
                st.push(arr[i]);
            }
            return result;
        }

        int main(){

            

        }