#include<iostream>
using namespace std;

int maxprofit(int price[], int n){
    int maxP = 0, bestBuy = price[0];

    for(int i=0; i<n; i++){
        if(price[i] > bestBuy){
            maxP = max(maxP, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    return maxP;
}

int main(){

    int price[] = {1,3,6,3,7,8,9};
    int n = 7;
    
    cout << "Max profit : " << maxprofit(price, n) << endl;

    return 0;

}