#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& A, int tar) {
      int st = 0, end = A.size()-1;

      while(st <= end){
        int mid = st + (end - st)/2;
        if(A[mid] == tar){
            return mid;
        }

        if(A[st] <= A[mid]){
            if(A[st] <= tar && tar <= A[mid]){
                end = mid-1;
            } else {
                st = mid + 1;
            } 
            }else {
                if(A[mid] <= tar && tar <= A[end]){
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
      }  
    
};

int main(){

    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;

    Solution sol;
    int idx = sol.search(arr, target);

    if(idx != -1)
        cout << "Element found at index: " << idx << endl;
    else
        cout << "Element not found." << endl;

        return 0;

}