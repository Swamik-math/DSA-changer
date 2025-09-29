#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){

    int n = 10;

    cout << factorial(n) << endl;
    cout << "Fibonacci of 10 is = " <<  fib(10) << endl; 
    return 0;
}

/*

1. recurrance relation
2. tc = total no. of recursion calls * work done in each call

1. f(n) = k + f(n-1)
   f(n-1) = k + f(n-2) 

   for fibonacci series time complexity is  =  O(2^n)
*/