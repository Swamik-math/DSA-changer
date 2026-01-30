#include<iostream>
#include<climits>
using namespace std;

void printMaxSubArr(int arr[], int n){
    int currSum = 0, maxSum = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        
        if(currSum > maxSum){
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        if(currSum < 0){
            currSum = 0;
            tempStart = i+1;
        }
    }

    cout << "Max sum = " << maxSum << endl;
    cout << "Sub Array: " ;
    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";

}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the " << n << " elements :";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Array :";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    printMaxSubArr(arr, n);

    return 0;
}