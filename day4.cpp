#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the n-value: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int i=1; i<=n; i++){
            cout << i;
        }
        cout << endl;
    }
    return 0;

}