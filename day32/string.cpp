#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// time complexity is -- O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0, end = n-1;

        while(st < end){

            if (!isalnum(s[st])) {
            st++;
            continue;
            }

            if (!isalnum(s[end])) {
            end--;
            continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            else{
                st++; end--;
            }
            
        }
        return true;
    }
};

int main(){
    string s = "race$ca%r@@@";
    Solution sol;

    cout << (sol.isPalindrome(s) ? "true" : "false") << endl;
    return 0;

}

/*

> TO CHECK WHETHER THE CAHRACTER IS ALPHABET OR NUMBER

*********************

bool isAlphanumeric(char c){
if((ch < '0' && ch <= '9' )
(tolower(ch) >= 'a' && tolower(ch) <= 'z') ){
    return true;
    }
}
*/