#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMin(vector<int> &num)
{
    int n = num.size();
    int l = 0, h = n - 1;
    int res = INT_MAX;
    
    while (l <= h)
    {
        int mid = (l + h) / 2;
        res = min(res, num[mid]);
        
        if (num[l] <= num[mid])  // left part is sorted
        {
            res = min(res, num[l]);
            l = mid + 1;  // search in right part
        }
        else  // right part is sorted
        {
            res = min(res, num[mid]);
            h = mid - 1;  // search in left part
        }
    }
    return res;
}


   
    int singleNonDuplicate(vector<int>& num) {
        
        int n = num.size();
        int i=0;
        int j = n-1;

        while(i < j){
            int mid = (i+j)/2;

            if(mid %2 == 1) mid--;

            if(num[mid] == num[mid+1])
                i = mid+2;
            else
                j = mid;
        }
        
        return num[i];  
    }


int main()
{
    vector<int> n = {3, 4, 5, 1, 2};

    cout << findMin(n) << endl;
    return 0;               
}