#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int , int> p1, pair<int , int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    // int arr[5] = {3,5,1,8,2};
    // vector<int> v = {3,5,1,8,2};
    vector<pair<int , int >> vec = {{3,1}, {2,1}, {5,1}, {7,4}};

    sort(vec.begin(), vec.end(), comparator);

    // sort(v.begin(), v.end());
    // sort(arr, arr+5, greater<int>());

    for(auto p : vec){
        // cout << val << " ";
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    return 0;
}

/*

> we use custom comparator to sort the pair based on the second value in the pair.

*/