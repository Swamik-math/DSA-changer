// begining of the vector 
// it looks similar to array
// are dynamic in nature
// stl - standard template library

// for array the size is fixed, we cannot extend it later

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> vec = {1,2,3,4,5};
    // vector<int> vec (5,0);
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];
    // cout << vec[3];
    // cout << vec[4] << endl;

    vector<int> vec;
    vec.push_back(25);
    vec.push_back(43);
    vec.push_back(21);
    vec.push_back(67);
    vec.push_back(98);
    vec.push_back(21001);

    for(int val : vec){
        cout << val << endl;
    }

    cout << "size = " << vec.size() << endl;

    vec.pop_back();
    for(int val : vec){
        cout << val << endl;
    }

    cout << "size = " << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(4) << endl;
    cout << vec.at(3) << endl;

    return 0;
}