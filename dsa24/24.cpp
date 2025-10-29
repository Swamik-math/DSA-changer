// aggressive cows problem

/*
Assign c cows to N stall such that minimum distance between them is largest possible
Retuen largest minimum distance

LARGEST MINIMUM DISTANCE
*/

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int cows = 1, lastStallPos = arr[0];

    for(int i=1; i<N; i++){
        if(arr[i] - lastStallPos >= minAllowedDist){
            cows++;
            lastStallPos  =arr[i];
        }

        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){

    sort(arr.begin(), arr.end());

    //start = 1, end = maxVal;

    int st = 1, end = arr[N-1] - arr[0], ans = -1;

    while(st <= end) {
        int mid = st + (end -st) /2;

        if(isPossible(arr), N, C, mid){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){

    int N = 5, C = 3;
    vector<int> arr = {1,2,8,4,9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}