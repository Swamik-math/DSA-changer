/* PAINTERS PARTION PROBLEM
*/


#include<iostream>
#include<vector>
using namespace std;

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

}

