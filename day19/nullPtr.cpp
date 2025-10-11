#include<iostream>
using namespace std;

/*
null pointer is the pointer that dosen't point to any location

int* ptr = NULL; -> it is represented as this.
*/

int main(){

    // int** ptr = NULL;
    // cout << ptr << endl;

    int a = 5;
    int* p = &a;
    int** q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;

    return 0;
}