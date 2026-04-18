#include <bits/stdc++.h>
using namespace std;


// brute force method
int maxWater(vector<int> &arr){

    int ans = INT_MIN;
    if(arr.size() <= 1) return 0;

    for(int i=0; i< arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            int height = min(arr[i], arr[j]);
            ans = max(ans, height * (j-i));
        }
    }
    return ans;
}

// sliding window method
int waterContainer(vector<int> &arr){
    int n = 
}

int main() {

    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxWater(arr) << endl;
    
    return 0;
}