// Mountain index array

#include<iostream>
#include<vector>
using namespace std;

// int peakMountain(vector<int>& arr){
//     int n = arr.size();
//     for(int i=0; i< n-1; i++){
//         if(arr[i] > arr[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }



    int peakIndexInMountainArray(vector<int>& A) {
        
        int n = A.size();
        int st = 0, ed = n-1;

        while(st <= ed){
            int mid = st+(ed-st)/2;

            if(A[mid-1] < A[mid] > A[mid+1]){
                return mid;
            }
            
            if(A[mid-1] < A[mid]){
                st = mid+1;
            }
            else{
                ed = mid-1;
            }
        }
        return st;
    }


int main(){
    vector<int> A = {1,2,3,4,6,9,3,2,1};

    // cout << "Peak index is: " << peakMountain(arr) << endl;
    cout << "Peak index is: " << peakIndexInMountainArray(A) << endl;


    return 0;
}


