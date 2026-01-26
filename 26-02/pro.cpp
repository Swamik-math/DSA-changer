#include<iostream>
#include<climits>
using namespace std;


// reverse an array
void reverseArray(int arr[], int n){
    int l = 0, r = n-1;
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

// print array
void printArray(int arr[], int n){
    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


// find the minimum and maxium number
void MinMaxNum(int arr[], int n){
    int mn = arr[0], mx = arr[0];

    for(int i=0; i<n; i++){
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << "Min = " << mn << ", Max = " << mx << endl;
}

// second largest number
void secondLargestNm(int arr[], int n){
    int first = INT_MIN, second = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << second;
}



int main(){

    int n;
    cout << "Enter the size of the arrya: ";
    cin >> n;

    if(n <= 0){
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter "<< n << "elements: "<< endl;

    for(int i=0; i<n; i++){
        cout << "Element " << i+1<< " : ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    reverseArray(arr, n);

    cout << "Reversed array: ";
    printArray(arr, n);

    MinMaxNum(arr, n);
    secondLargestNm(arr, n);

    return 0;
}