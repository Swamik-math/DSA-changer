#include<iostream>
using namespace std;

int linearSearch(int arr[], int sze, int target){
    for(int i=0; i<sze; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {21, 23, 45, 64, 11, 56};
    int sze = 6;
    int target = 11;
    linearSearch(arr, sze, target);
    cout << "The required element is in the position: " << linearSearch(arr, sze, target) << endl;

    return 0;

}

// time complexity = O(n)
// 