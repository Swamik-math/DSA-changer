#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> alternative(vector<int> arr)
{

    vector<int> a;
    for (int i = 0; i < arr.size(); i += 2)
    {
        a.push_back(arr[i]);
    }
    return a;
}

// recursion method to get the alternative elements
void getAltRec(vector<int> &arr, int idx, vector<int> &res){
    if(idx < arr.size()){
        res.push_back(arr[idx]);
        getAltRec(arr, idx+2, res);
    }
} 

vector<int> getAlt(vector<int> &arr){
    vector<int> res;
    getAltRec(arr, 0, res);
    return res;
}

// leaders in an arary
vector<int> leader(vector<int> &arr){
    int n = arr.size();
    vector<int> res;

    // for(int i=0; i<n; i++){
    //     int j;
    //     for( j=i+1; j<n; j++){
    //         if(arr[i] < arr[j])
    //             break;
    //     }
    //     if(j == n){
    //         res.push_back(arr[i]);
    //     }
    // }
    // return res;
    
    int maxRight = arr[n-1];
    res.push_back(maxRight);

    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxRight){
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}


int main()
{

    vector<int> arr = {16, 17, 4, 3, 5, 2};

    // vector<int> result = alternative(arr);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
    // cout << endl;

    // vector<int> res = getAlt(arr);
    // for(int x:res)
    //     cout << x << " ";
    vector<int> res = leader(arr);
    for(int x:res)
        cout << x << " ";

}