#include<iostream>
#include<vector>
using namespace std;

int main(){

    // int marks[5] = { 10, 12, 9 , 11, 32};

    // // marks[1] = 99;
    // // cout << marks[1] << endl;
    // int n = 5;
    // for(int i=0; i<5; i++){
    //     cout << marks[i] << endl;
    // }

    int size = 10;
    // int marks[size];
    vector<int> marks(size);

    for(int i=0; i<size; i++){
        cin >> marks[i] ;
    }
    
    return 0;
}



/* ARRAYS
- in array we can only store same type of datatypes
- are contiguous in memory
- are linear
- non primitive datatype

1. int marks[100];
2. int marks[5] = {1,2,3,4,5}; 
3. double prize[];
*/