#include<iostream>
using namespace std;

// 2 pointer approach - to reverse an array

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    // for(int i=0; i<7; i++){
    //     int start = arr[i];
    //     for(int j=siz; j>0; j--){
    //         int final = arr[j];
    //         swap(start, final);
            
    //     }
        
    // }
    // for(int i=0; i<siz; i++){
    //     cout << arr[i] << " ";
    // }
    reverseArray(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}


// time complexity O(n)