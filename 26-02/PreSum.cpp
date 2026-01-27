#include<iostream>
#include<unordered_map>
using namespace std;

void prefixSum(int arr[], int n, int pre[]){
    pre[0] = arr[0];
    for(int i=0; i<n; i++){
        pre[i] = pre[i-1]+arr[i];
    }
}

int rangeSum(int pre[], int L, int R ){
    if(L == 0)
        return 0;
    return pre[R] - pre[L - 1];
}

int main(){
    int arr[] = {1,2,3,4,5,6,6};
    int n = 7;

    

    return 0;
}