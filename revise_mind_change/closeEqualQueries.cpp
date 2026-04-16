#include <bits/stdc++.h>
using namespace std;


int findTar(vector<int> &arr, int tar, int sI){

    int n = arr.size();
    int l = sI;
    int r = sI;
    int steps = 0;

    while(steps < n){

        if(arr[l] == tar || arr[r] == tar){
            return steps;
        }

        l = (l-1+n) % n;
        r = (r+1) % n;
        steps++;
    }
    return -1;
}

vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        
    vector<int> result;

    for(int i = 0; i < queries.size(); i++){
        int q = queries[i];
        int distance = findTar(nums, queries[q], q);
        result.push_back(distance);
    }
    return result;
}

int main() {
    return 0;
}