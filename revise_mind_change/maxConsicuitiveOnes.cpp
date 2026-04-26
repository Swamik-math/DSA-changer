#include <bits/stdc++.h>
using namespace std;



    int longestconsiOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int zero = 0;
            for(int j=i; j<n; j++){
                if(nums[j] == 0){
                    zero++;
                }
                if(zero <= k){
                    int len = j-i+1;
                maxlen = max(maxlen, len);
                }
                else break;
            }
        }
        return maxlen;
    }


    int longOnes(vector<int> &nums, int k){
        int n = nums.size();
        int maxlen = 0, l =0, r = 0, zero = 0;

        while(r < n){
            if(nums[r] == 0) zero++;

            while(zero > k){
                if(nums[l] == 0){
                    zero--;
                }
                l++;
            }

                if(zero <= k){
                    int len = r-l+1;
                    maxlen = max(maxlen, len);
                    r++;
                }
        }
        return maxlen;
    }

int main() {

    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    
    cout << longOnes(arr, 2);

    return 0;
}