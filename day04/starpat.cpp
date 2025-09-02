// holl0w pattern code

#include<iostream>
using namespace std;


    // int main(){
    //     int n = 5;

    //     //top
    //     for(int i=0; i<n; i++){
    //         //space
    //         for(int j=0; j<n-i-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";

    //         if(i != 0){
    //         //space
    //         for(int j=0; j<2*i-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // bottom

    // for(int i=0; i<n-1; i++){

    //     //space
    //     for(int j=0; j<i+1; j++){
    //         cout << " ";
    //     }

    //     cout << "*";
    //     if(i != n-2){

    //         //space 
    //         for(int j=0; j<2*(n-i)-5; j++){
    //             cout << " ";
    //         } 
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //     return 0;
    // }


    int main(){
        int n=5;


        // top
        for(int i=1; i<n;i++){

            //star
            for(int j=0; j<i; j++){
                cout << "*";
            }
            

            //space
            for(int j=0; j<2*(n-i+1)-5; j++){
                cout << " "; 
            }
            
            for(int j=0; j<i; j++){
            cout << "*";
            }
            cout << endl;
    }

    //bottom
    for(int i=0; i<n;i++){

        //star
        for(int j=0; j<n-i-1; j++){
            cout << "*";
        }
        for(int j=0; j<2*i-1; j++){
            cout << " ";

            //star
            for(int j=n-1; j>0; j--){
                cout << j;
            }
        }
        cout << endl;
    }
        return 0;
    }





    