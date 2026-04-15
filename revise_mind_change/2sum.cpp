#include <bits/stdc++.h>
using namespace std;


// 2-pointer
bool twoSum(vector<int> arr, int tar){

    sort(arr.begin(), arr.end());
    int n = arr.size();
    int l = 0;
    int r = n-1;

    while(l<r){
        int sum = arr[l] + arr[r];

        if(sum == tar) return true;

        else if(sum < tar) l++;
        
        else r--;
    }
    return false;
}

// through hash-function 
bool TwoSum(vector<int> arr, int tar){
    unordered_set<int> s;

    for(int i=0; i<arr.size(); i++){
        int rem = tar - arr[i];

        if(s.find(rem) != s.end()) // s.end() -> represents not found in the set/ hash-set
            return true;
        
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, -3, 8, -4};
    if(twoSum(arr, 0))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}