// Dutch national flag

#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int low=0, mid=0, high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    int n = 5;
    int arr[5] = {2,2,2,0,1};

    sort012(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}