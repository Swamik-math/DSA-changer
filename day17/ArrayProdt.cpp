#include<iostream>
#include<vector>
using namespace std;

// int arrayProd(int num[], int n ){

//     vector<int> ans(n,1);
//      for(int i=0; i<n; i++){
//         int prod = 1;
//         for(int j=0; j<n; j++){
//             if(i != j){
//                 prod *= num[j];
//             }
//         }
//         ans[i] = prod;
//      }
//      return ans[];
// }

vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n,1);

        for(int i=0; i<n; i++){
            int prod = 1;
            for(int j=0; j<n; j++){
                if(i != j){
                    prod *= nums[j];
                }
            }
            ans[i] = prod;
        }
        return ans;
    }



    //  vector<int> productExceptSelf(vector<int>& nums) {
        
    //     int n = nums.size();
    //     vector<int> ans(n,1);
    //     vector<int> prefix(n,1);
    //     vector<int> suffix(n,1);

    //     //prefix
    //     for(int i=1; i<n; i++){
    //         prefix[i] = prefix[i-1] * nums[i-1];
    //     }
    //     //suffix
    //     for(int i=n-2; i>=0; i--){
    //         suffix[i] = suffix[i+1] * nums[i+1];
    //     }

    //     // ans
    //     for(int i=0; i<n; i++){
    //         ans[i] = prefix[i] * suffix[i];
    //     }
    //     return ans;
        
    // }

int main(){
     int n = 5;
     int num[5] = {1,2,3,4,5};
     vector<int> nums(num, num+n);

     vector<int> ans = productExceptSelf(nums);

     cout << "The product array is: ";
     for(int x : ans){
        cout << x << " ";
     }
     cout << endl;
     return 0;
}