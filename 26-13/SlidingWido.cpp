#include<iostream>
#include<vector>
using namespace std;

// 'Find max sum of subarray of size k'

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

int main(){
    vector<int> arr = { 1,  2,  3,  4,  5,  1,  4 };

    cout << "array : ";
    for(int x:arr)
        cout << x << " ";
    cout << endl;
    
    cout << maxSum(arr, 4) << endl;
    return 0;
}