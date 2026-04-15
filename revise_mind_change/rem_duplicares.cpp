#include <bits/stdc++.h>
using namespace std;


int RemDup(vector<int>& arr){   // pass by reference, if u dint use the & symbol it would create a copy if the array

    sort(arr.begin(), arr.end());
    int i = 0;

    for(int j=1; j<arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
  



int main() {
    vector<int> arr = {1, 1, 1, 1, 2, 2, 2, 3, 3, 5, 5, 5, 7, 8, 3, 3, 3};
    int newSize = RemDup(arr);
    
    for(int i=0; i<newSize; i++){
        cout << arr[i] << " ";
    }

    return 0;
}