/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.
*/

#include<iostream>
#include<vector>
using namespace std;

    int singleNonDuplicate(vector<int>& A) {
        int st=0, ed=A.size()-1;

            while(st < ed) {
                int mid = st + (ed-st) / 2;
                
                if(A[mid-1] != A[mid] && A[mid] != A[mid+1]){
                    return A[mid];
                }
                else if(mid % 2 == 0){
                    if(A[mid-1] == A[mid]){
                        ed = mid-1;
                    } else {
                        st = mid+1;
                    }
                } else {
                    if(A[mid-1] == A[mid]){
                        st = mid+1;
                    } else {
                        ed = mid-1;
                    }
                }
                
            }
        return A[st];
    }
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,6,6};
    cout << "The element which is single is: " << singleNonDuplicate(arr) << endl;

    return 0;
}