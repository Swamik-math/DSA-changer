/*

> In array the size of the array is fixed.
> We can only put up to a limit in the array.

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(7);

    vec.pop_back();

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // cout << "val at indx " << vec[2] << " or " << vec.at(2) << endl;
    
    cout << "front " << vec.front() << endl;
    cout << "back " << vec.back() << endl;

    return 0;
}