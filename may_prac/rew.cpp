#include <bits/stdc++.h>
using namespace std;

int kadanesalgo(vector<int> arr){
    int res = INT_MIN;

    int n = arr.size();
    int sum = 0;
    for(int i=0; i<n; i++){

        sum += arr[i];

        res = max(sum, res);
        
        if(sum < 0){
            sum = 0;
        }
    }
    return res;
}

int main() {

    vector<int> arr = {-3, -2, -5};

    cout << kadanesalgo(arr) << endl;
    return 0;
}