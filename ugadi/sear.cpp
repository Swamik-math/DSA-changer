#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// linear search -> unsorted array, search one by one O(n)
// binary search -> for sorted array O(log n), it uses the mid element


int largest(vector<int> &arr){
    return *max_element(arr.begin(), arr.end());
}

int main(){
    // vector<int> m = {100, 200, 10000, 23, 34};

    // cout << largest(m) << endl;
    vector<int> arr = {1, 2, 3};
     cout << next_permutation(arr.begin(), arr.end()) << endl;
    

}