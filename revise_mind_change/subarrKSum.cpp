#include <bits/stdc++.h>
using namespace std;

int subArrSum(vector<int> & arr, int k){
    int n = arr.size();
    vector<int> preSum(n);

    preSum[0] = arr[0];
    for(int i=1; i<n; i++){
        preSum[i] = preSum[i-1] + arr[i];
    }
    
    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int ans = (i == 0) ? preSum[j] : preSum[j]-preSum[i-1];

            if(ans == k) count++;
        }
    }
    return count;
}

// using hash-map 



int main() {

    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int k = 33;

    cout << subArrSum(arr, k) << endl;

    return 0;
}