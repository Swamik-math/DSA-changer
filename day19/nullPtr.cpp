#include<iostream>
using namespace std;

/*
null pointer is the pointer that dosen't point to any location

int* ptr = NULL; -> it is represented as this.

references = alias(meaning)
*/

// void changeA(int* ptr){
//     *ptr = 20;
// }

// void changeB(int &b){
//     b = 20;
// }

// int main(){

    // int** ptr = NULL;
    // cout << ptr << endl;

    // int a = 5;
    // int* p = &a;
    // int** q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;

    // pass by reference
//     int a = 10;
//     changeB(a);
//     cout << "inside main fnx : " << a << endl;

//     return 0;
// }



// ARRAY POINTER
// array pointers are constant value, those values cannot be changed throughtout the program

int main(){
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout << *arr << endl;

    return 0;
}