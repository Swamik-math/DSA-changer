#include<iostream>
using namespace std;

int main(){

    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int maxWater = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int w = j-i;
            int h = min(height[i], height[j]);
            int area = w * h;
            maxWater= max(maxWater, area);
            cout << i << " " << j << endl;
        }

    }
    cout << "Maxium capacity of the water is : " << maxWater << endl;
    
    return 0;

}