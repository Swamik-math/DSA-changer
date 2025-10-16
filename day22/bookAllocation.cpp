// Book allocation problem
/*
You have to allocate books to M number of students so that the maxium number of pages allocated to a student is minimum

> Each book should be allocated to a student.
> Each student has to be allocated at least one book.
> Allotment should be in contiguous manner/ order.
*/

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students = 1, pages=0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m > n){
        return -1;
    }


    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int st  = 0, end = sum;
    
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;

}

