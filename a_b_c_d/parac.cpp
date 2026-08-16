#include <bits/stdc++.h>
using namespace std;


int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}



int fibonacci(int n){
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void generateSubsets(int i, vector<int>& nums, vector<int>& curr, vector<vector<int>>& result) {
        if (i == nums.size()) {
            result.push_back(curr);
            return;
        }

        // 1. Include nums[i]
        curr.push_back(nums[i]);
        generateSubsets(i + 1, nums, curr, result);

        // 2. Exclude nums[i] (Backtrack)
        curr.pop_back();
        generateSubsets(i + 1, nums, curr, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;
        generateSubsets(0, nums, curr, result);
        return result;
    }


int main() {
    vector<int> nums = {1, 2, 3};
    auto result = subsets(nums);

    cout << "Subsets:\n";
    for (auto &s : result) {
        cout << "{";
        for (size_t i = 0; i < s.size(); ++i) {
            if (i) cout << ", ";
            cout << s[i];
        }
        cout << "}" << '\n';
    }

    return 0;
}