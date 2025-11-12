#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> result;
        vector<string> mapping = {
            "",    // 0
            "",    // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };

        string current;
        backtrack(digits, 0, mapping, current, result);
        return result;
    }

private:
    void backtrack(const string &digits, int index, const vector<string> &mapping,
                   string &current, vector<string> &result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (char ch : letters) {
            current.push_back(ch);
            backtrack(digits, index + 1, mapping, current, result);
            current.pop_back(); // backtrack
        }
    }
};


int main() {
    Solution s;
    string digits = "23";
    vector<string> combos = s.letterCombinations(digits);

    for (auto &str : combos)
        cout << str << " ";
    cout << endl;

    return 0;
}
