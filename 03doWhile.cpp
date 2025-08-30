// loops

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

// int main(){
//     int n ;
//     cout << "Enter the number : ";
//     cin >> n;

//     bool isPrime = true;
//     for(int i=2; i*i <= n-1; i++){
//         if( n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }

// if(isPrime == true){
//     cout << "The number is a prime number.";
// }
// else{
//     cout << "The number is not a pirme number.";
// }
//     return 0;
// }

// nested loops

// int main(){

//     for(int i=1; i <= 5; i++){
//         int m = 10 ;
//         for(int i=1; i<= m; i++){
//             cout << "*";
//         }
//      cout << endl;   
//     }
//     return 0;

// }


// int main(){
//     int n , sum =0;
//     cout << "Enter n value: ";
//     cin >> n;

//     for(int i=0; i<=n; i++){
//         if( i%3 == 0){
//             sum += i;
//         }
//     }
//     cout << sum;
//     return 0;
// }


// n number factorial value: ____;

int main(){
    int n = 5;
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    cout << ans;
    return 0 ;
}