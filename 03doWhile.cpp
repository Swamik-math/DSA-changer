// do - while loop

#include<iostream>
using namespace std;

// int main(){

//     int n = 10;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i++;
//     } while( i <= n);

//     cout << endl;
//     return 0;

// }


// to find the given number is prime or not

int main(){
    int n ;
    cout << "Enter the number : ";
    cin >> n;

    bool isPrime = true;
    for(int i=2; i <= n-1; i++){
        if( n%i == 0){
            isPrime = false;
            break;
        }
    }

if(isPrime == true){
    cout << "The number is a prime number.";
}
else{
    cout << "The number is not a pirme number.";
}
    return 0;
}