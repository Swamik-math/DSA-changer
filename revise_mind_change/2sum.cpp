#include <bits/stdc++.h>
using namespace std;


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
int main() {
    vector<int> arr = {1, 2, 3, -3, 8, -4};
    if(twoSum(arr, 0))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}