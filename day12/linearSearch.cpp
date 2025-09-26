#include<iostream>
using namespace std;

int main(){

    int n = 10;
    int arr[10] = {1,2,3,4,5,6,8,9,0,10};

    int target = 5;

    for(int i=0; i<n; i++){
        if(arr[i] == target ){
            cout << "Target found at index = " << i << endl;
           
        }else {
            i++;
        }
    }
    return 0;
}