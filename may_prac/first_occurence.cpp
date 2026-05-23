#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(vector<int> arr, int target){
    int n = arr.size();
    int i=0;
    int j = n-1;
    int ans = -1;

    while(i <= j){
        int mid = i + (j-i) / 2;

        if(arr[mid] == target){
            ans = mid;
            j = mid-1;
        }
        else if(arr[mid] < target){
            i = mid+1;
        }
        else 
        j = mid-1;
    }
    return ans;

}

int main() {

    vector<int> arr = {1, 1, 2, 2, 3, 4};
    cout << FirstOccurence(arr, 2) << endl;
    return 0;
}