#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cout << "Enter the n-value: ";
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;

// }


// int main(){

//     int n;
//     cout << "Enter the n-value: ";
//     cin >> n;

//     for(int i=0; i<n; i++){
//         char ch = 'A';
//         for(int j=0; j<n; j++){
//             cout << ch << " ";
//             ch = ch+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }




int main(){
    int n;
    cout << "Enter the n value : ";
    cin >> n;

    // int num =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;

}

