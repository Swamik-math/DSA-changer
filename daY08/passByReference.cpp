#include<iostream>
using namespace std;


    void changeArr(int arr[], int size){
        cout << "in function\n";
        for(int i=0; i<size; i++){
            arr[i] = 2*arr[i];
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    int main(){
        int arr[] = {1, 2, 4, 6, 7};
        changeArr(arr, 5);

        cout << "in main\n";
        for(int i=0; i<5; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
}

// pointer is used to store the address

