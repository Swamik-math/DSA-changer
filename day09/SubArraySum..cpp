#include<iostream>
#include<vector>
using namespace std;

// subarry is the continuous part of the array
// total number of sub array = n(n+1)/2
int main(){

    int n = 5;
    int arr[5] = {1,2,3,4,5};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;

}