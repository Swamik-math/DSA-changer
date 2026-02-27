#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// we use unordered map in hashing technique
// unordered_map<int, int> mp;
// mp[5] = 10;
// mp[3]++;

// ---> frequency map

// vector<int> arr = {1,2,3,4,5,1,4};
// unordered_map<int, int> freq;

// for(int x: arr){
//     freq[x]++;
// }
int main(){
    vector<int> arr = {1,2,3,4,5,1,4};
    unordered_map<int, int> freq;

    for(int x: arr){
        freq[x]++;
    }

    cout << "Element frequencies: " << endl;
    for(auto& q: freq){
        cout << q.first << ":" << q.second << "\n";
    }
    return 0;
}
