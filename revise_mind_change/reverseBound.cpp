#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int minMirrorPairDistance(vector<int>& nums) {
         unordered_map<int, int> map;

    int n = nums.size();

    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        // int revNum = reverseNum(nums[i]);

        if(map.count(nums[i])){
            ans = min(ans, i - map[nums[i]]);
        }
        map[reverseNum(nums[i])] = i;
    }
    return (ans == INT_MAX) ? -1 : ans;
} 

int main() {
    vector<int> num = {21, 120};

    int ans = minMirrorPairDistance(num);
    cout << ans << "\n";
    return 0;

   
}