/*

> In array the size of the array is fixed.
> We can only put up to a limit in the array.

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(7);

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}