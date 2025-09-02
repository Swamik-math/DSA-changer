//  Functions :

#include<iostream>
using namespace std;

// void printHello(){
//     cout << "Hello\n";
// }

// int main(){


//  Function call or it is also called as function as invoke.


//     printHello();

//     int a=10;
//     int c=20;

//     cout << "Hello\n";

// return 0;
// }

// int printHello(){
//     cout << "hello\n";
//     return 3;
// }

// int main(){

//     int val = printHello();

//     cout << "val = " << val << endl;

//     return 0;
// }

// PARAMETERS

int sum(int a, int b){
    int s = a+b;
    return s;
}

int minValue(int a, int b){  // parameters
    if( a<b){
        return a;
    }else{
        return b;
    }
}

int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;

}

// factorial

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){

    // cout << sum(10, 5) << endl; // arguments

    // cout << minValue(10, 5) << endl;

    cout << sumN(11) << endl;
    cout << sumN(6)<< endl;
    cout << fact(3) << endl;
    cout << fact(10) << endl;

    return 0;
}

// to reduce the redundancy