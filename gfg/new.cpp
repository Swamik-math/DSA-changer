#include<iostream>
using namespace std;

int factorial(int n){

    // int sol = 1;
    // for(int i=2; i<=n; i++){
    //     sol = sol*i;
    // }
    // return sol;

    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}

int countPairs(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i*i*i + j*j*j == n){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    int n = 5;
    cout << factorial(n) <<endl;
}