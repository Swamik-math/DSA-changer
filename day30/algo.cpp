#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    // int target  = 4;

    // string s = "absc";

    // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(), s.end());
    // next_permutation(v.begin(), v.end());

    cout << *(min_element(v.begin(), v.end())) << endl;
    cout << *(max_element(v.begin(), v.end())) << endl;

    cout << binary_search(v.begin(), v.end(), 4) << endl;


    int n = 10;

    cout << __builtin_popcount(n) << endl;

    // cout << s << endl;

    return 0;

}