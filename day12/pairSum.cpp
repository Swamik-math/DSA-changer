#include<iostream>
using namespace std;

// for sorted array - optimised array
int main(){

    int num = 6;
    int arr[] = {1,2,3,4,5,6};

    int sum = 0;
    int target = 3;

    // for( int i=0; i<num; i++){
    //     for(int j=num-1; j>0; j--){
    //         sum = arr[i] + arr[j];

    //         if(sum > target){
    //             j--;
    //         }
    //         else if(sum < target){
    //             i++;
    //         }
    //         else if(sum == target){
    //             cout << i << " " << j << endl;
    //         }

    //     }
    // }
    // return 0;

    int i=0, j= num-1;

    while(i < j){
        sum = arr[i]+arr[j];

        if(sum > target){
            j--;
        }
        else if(sum < target){
            i++;
        }
        else if(sum == target){
            cout << i << " " << j << endl;
            return sum;
        }
    }
    return 0;

}