#include<iostream>
#include <cmath>

using namespace std;

bool powerOf2(int n){
    if(n <= 0)
        return false;

    int logValue = log2(n);
    return pow(2, logValue) == n;

}

int main(){

    int n =32;
    cout << powerOf2(n) << endl;

    return 0;
}