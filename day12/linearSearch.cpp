#include<iostream>
using namespace std;

int main(){

    int n = 10;
    int arr[10] = {1,2,3,4,5,6,8,9,0,10};

    int target = 5;

    for(int i=0; i<n; i++){
        if(arr[i] == target ){
            cout << "Target found at index = " << i << endl;
           
        }else {
            i++;
        }
    }
    return 0;
}

/*
time complexity for linear search is O(n)

Big O notation gives the worst case senario
and it is also called as upper bound

average case time complexity - θ (theta) 

best case time complexity - Ω(omegha) , also called as lower bound.

BOOK = "cormen"
*/

/*
SPACE COMPLEXITY

-> amount of space taken by an algorithm as a function of input size(n).

O(1) < O(log n) < O(n) < O(n log n) << O(x^2) << O(x^3) << O(x^3) << O(2^x) << O(n!)

*/