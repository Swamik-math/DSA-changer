#include <bits/stdc++.h>
using namespace std;

// hash-map = store frequency / quick lookup
// used in => (duplicates, majority elements, counting pairs)


// check existence
// if(mp.count(target)){
// (to check the existance)
// }


int main() {
    vector<int> nums = { 1,2,3,4,1,22,3,3,4,3};
    int n = nums.size();
    int target = 4;

    unordered_map<int, int> mp;
    for(int x : nums){
        mp[x]++;

    }

    // two sum
    for(int i=0; i<n; i++){
        int need = target - nums[i];

        if(mp.count(need)){
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
}