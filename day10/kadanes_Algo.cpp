//kadanesn algorithm 
//most optimised
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int n = 5;
    int arr[5] = {-1,2,-3,4,5};

    int currSum = 0, maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}

// time complexity = O(n)
 