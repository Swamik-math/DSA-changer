#include<iostream>
#include<vector>
using namespace std;

// 'Find max sum of subarray of size k'
// fixed window size
int maxSum(vector<int>& arr, int k){
    int n = arr.size();
    int widoSum = 0, maxSum = 0;

    for(int i=0; i<k; i++)
        widoSum += arr[i];
    
    maxSum = widoSum;

    for(int i=k; i<n; i++){
        widoSum += arr[i];
        widoSum -= arr[i - k];
        maxSum = max(maxSum, widoSum);
    }
    return maxSum;
}

// variable window size
// Expand right
// If sum > K → shrink left
int longestsubArr(vector<int>& arr, int k){
    int l = 0, sum = 0, ans = 0;
    int n = arr.size();

    for(int r=0; r<n; r++){
        sum += arr[r];

        while(sum > k){
            sum -= arr[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }
    return ans;
}



int main(){
    vector<int> arr = { 1,  2,  3,  4,  5,  1,  4 };

    cout << "array : ";
    for(int x:arr)
        cout << x << " ";
    cout << endl;
    
    cout << maxSum(arr, 4) << endl;
    cout << longestsubArr(arr, 4) << endl;
    return 0;
}