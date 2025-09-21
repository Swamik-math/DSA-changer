#include<iostream>
#include<climits>
using namespace std;

int main(){

    int nums[] = {5, 6, -1, -71, 11};
    int n = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<n; i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }

        smallest = min(nums[i], smallest);

        // if(nums[i] > largest){
        //     largest = nums[i];
        // }
        largest = max(nums[i], largest);
    }
    cout << "Smallest number = " << smallest << endl;
    cout << largest << endl;

    return 0;

}
