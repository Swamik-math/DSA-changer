#include<iostream>
using namespace std;

int main(){

    // to print the address of the stored value
    int a = 10;
    cout << &a << endl;

    float m  = 10.354;
    float* ptr2 = &m;
    cout << &m << "    " << &ptr2 << endl;
    cout << *(&m) << endl;
    cout << *(ptr2) << endl;


    // pointer to pointer

    int b = 10;
    int* ptr = &b;
    int** parptr = &ptr;
    cout << &ptr << "  " << &parptr << endl;
    cout << **(parptr) << endl;
    cout << *(parptr) << endl;
    cout << ptr << endl;

    return 0;
}

// pointers - are the special variable that store the address of the variable
// * -> dereference operator (value at address)
