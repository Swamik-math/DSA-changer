#include<iostream>
using namespace std;

int main(){


    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl; // decreases the size
    cout << sizeof(signed int) << endl; // it differ the number +ve and -ve
    cout << sizeof(long long int) << endl;


    unsigned int x = -10;
    cout << x << endl;

    return 0;
}
