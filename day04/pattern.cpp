#include<iostream>
using namespace std;

// int main(){
//     int n = 10;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << ch << " " ;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;

// }


// int main(){
//     int n =10;

//     for(int i=0; i<n; i++){
        
//         for(int j= i+1; j>0; j--){
//             cout << j << " ";
            
//         }
//         cout << endl;
//     }
//     return 0;
// }

// floyds triangle pattern

// int main(){

//     int n =20;

//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 5;

//     int num = 1;
//     for(int i=0; i<n; i++){

//         //space 
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }

//         //num
//         for(int j=0; j<n-i; j++){
//             cout << (i+1) << " ";
        
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main(){
    int n =5;

    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
    // int num1 = 1;
        //num-1
        for(int j=1; j<=i+1; j++){
            cout << j ;
            // num1++;
        }
        //num-2
        // int num2 = 1;
        for(int j=i; j>0; j--){
            cout << j ;
            // num2++;
        }
        cout << endl;

    }
    return 0;
}