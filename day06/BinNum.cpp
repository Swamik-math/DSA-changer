#include<iostream>
using namespace std;


// convert decimal to binary

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

// convert binary to decimal

int binToDec(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += binNum * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    
    int decNum = 50;
    cout << decToBinary(decNum) << endl;

    cout << endl << endl;

    for(int i=0; i<= 20; i++){
        cout << decToBinary(i) << endl;
    }

    int binNum = 101;

    cout << binToDec(binNum) << endl;

    return 0;
    
}


// for every odd decimal number in the in the binary form it should have 1 in the begining of the number

