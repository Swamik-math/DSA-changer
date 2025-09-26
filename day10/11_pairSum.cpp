#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int arr[5]  = {1,2,3,4,5};
    int target = 7;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           
            if(arr[i] + arr[j] == target){
                cout <<"index " <<  i << " " << j << "-";
                cout <<"nums " <<  arr[i] << " " << arr[j] << endl;
            } 
            
        }
    }
    return 0;
}

// by use of the brute force algorithm 
// time complexity is O(n^2)
