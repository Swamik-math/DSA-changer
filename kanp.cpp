#include <bits/stdc++.h>
using namespace std;


int knaphelper(vector<int> & val, vector<int> &wt, int W, int n, vector<vector<int>> &memo){

    if(n == 0 || W == 0) return 0;

    if(memo[n][W] != -1){
        return memo[n][W];
    }

    int pick = 0;

    if(wt[n-1] <= W){
        pick = val[n-1] + knaphelper(val, wt, W - wt[n-1], n-1, memo);
    }

    int notpick = knaphelper(val, wt, W, n-1, memo);

    return memo[n][W] = max(pick, notpick);

}

int knapsack(vector<int> &val, vector<int> &wt, int W){

    int n = val.size();

    vector<vector<int>> memo(n+1, vector<int>(W+1, -1));

    return knaphelper(val, wt, W, n, memo);
}

int main() {

    vector<int> val = {1, 2, 3};
    vector<int> wt = {4, 5, 1};
    int W = 4;
    int n = val.size();

    // cout << knapsack(val, wt, W) << endl;

    // return 0;

    vector<vector<int>> tab(n+1, vector<int>(W+1, 0));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=W; j++){

            int pick = 0;

            if(wt[i-1] <= j){
                pick = tab[i-1][j-wt[i-1]] + val[i-1];
            }

            int notpick = tab[i-1][j];

            tab[i][j] = max(pick, notpick);
        }
    }

    cout << tab[n][W] << endl;
    return 0;

}