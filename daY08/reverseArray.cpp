#include<iostream>
using namespace std;

// 2 pointer approach - to reverse an array

int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int siz = 7;

    for(int i=0; i<7; i++){
        int start = arr[i];
        for(int j=siz; j>0; j--){
            int final = arr[j];
            swap(start, final);
            
        }
        
    }
    for(int i=0; i<siz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}