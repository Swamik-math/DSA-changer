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

// int fact(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main(){

//     // cout << sum(10, 5) << endl; // arguments

//     // cout << minValue(10, 5) << endl;

//     cout << sumN(11) << endl;
//     cout << sumN(6)<< endl;
//     cout << fact(3) << endl;
//     cout << fact(10) << endl;

//     return 0;
// }

// to reduce the redundancy
// heap -- dynamic allocation
// stack -- it uses satatic memory

// the created functions int the code is stored in the form of the STACK

// pass by value : copy of arguments is passed to function 
// pass by reference : (in pointers)



// int changeX(int x){
//     x = 2*x;
//     cout << "x = " << x << endl;
// }

// int main(){
//     int  x= 5;

//     changeX(x);

//     cout << "x = " << x << endl;

//     return 0;
// }

// To calculate the sum of digits of the number
int sumDigit(int num){

    int digSum =0;

    while(num > 0){
        int lastDig = num%10;
        num = num/10;

        digSum += lastDig;
    }
    return digSum;
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "The sum of the digits in the number is : " << sumDigit(n) << endl;

    return 0;
}
