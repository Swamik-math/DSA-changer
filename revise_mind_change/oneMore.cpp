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
    int n = arr.size();
    if(n <= 1) return 0;
    int l = 0;
    int r = n-1;

    int water = INT_MIN;

    while(l < r){
        int width = r - l;

        int currWt = min(arr[l], arr[r]) * width;
        water = max(water, currWt);

        if(arr[l] < arr[r]) l++;
        else r--;
    }
    return water;

}

int main() {

    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    
    cout << maxWater(arr) << endl;
    cout << waterContainer(arr) << endl;
    return 0;
}