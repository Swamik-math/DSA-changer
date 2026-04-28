#include <bits/stdc++.h>
using namespace std;


// koko eating bananas
int minEatingSpeed(vector<int> &p, int h){
    int n = p.size();

    int l = 1;
    int r = *max_element(p.begin(), p.end());
    int res = r;

    while (l <= r){
        int mid = l+(r-l) / 2;
        
        long long k =0;

        for(int &x : p){
            k += (x % mid == 0) ? x/mid : (x/mid)+1;
        }
        if(k <= h){
            res = mid;
            r = mid-1;
        } else{
            l = mid+1;
        }
    }
    return res;
    
}

int main() {
    vector<int> p = {30,11,23,4,20};
    int h = 5;

    cout << minEatingSpeed(p, h) << endl;

    return 0;
}