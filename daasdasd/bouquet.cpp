#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


    int minDays(vector<int>& bl, int m, int k) {
        
        int n = bl.size();
        int minDay = -1;

        // if(n < m*k) return -1;

        int l = *min_element(bl.begin(), bl.end());
        int r = *max_element(bl.begin(), bl.end());

        while(l <= r){
            int mid = (l+r) /2;
            
            int boqt = 0;
            int count = 0;
            for(int i=0; i<n; i++){
                if(bl[i] <= mid){
                    count++;
                }
                else count = 0;

                if(count == k){
                    boqt++;
                    count = 0;
                }
            }
            if(boqt >= m){
                minDay = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        return minDay;
    }

    int main(){
        vector<int> day = {1, 10, 3, 10, 2};
        int m =3, k =1;

        int res = minDays(day, m, k);
        cout << res << endl;
        
        return 0;
    }
