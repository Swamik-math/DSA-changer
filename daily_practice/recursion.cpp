#include <bits/stdc++.h>
using namespace std;


/*
RECURSION

golden rule - >
base case
work
call smaller problem

*/

// reverse an array
void reverse(int i, int j, vector<int> &arr){
    if(i >= j) return;

    swap(arr[i], arr[j]);
    reverse(i+1, j-1, arr);
}

int main() {

    unordered_map<int, int> mp;
    mp[0] = -1;

    int sum = 0, maxLen = 0;

    for(int i=0; i<n; i++){
        sum += nums[i];

        if(mp.count(sum - k)){
            maxLen = max(maxLen, i- mp[sum - k]);
        }
        if(!mp.count(sum)){
            mp[sum] = i;
        }
    }


    return 0;
}