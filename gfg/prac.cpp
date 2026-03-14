
#include<iostream>
using namespace std;

bool isEven(string n){
    int lastDigit = (n[n.size() - 1] - '0');
    return lastDigit%2 == 0;
    
}

// in binary form odd numbers always end with one SO
bool is_even(int n){
    if((n&1) == 0)
        return true;
    else return false;
}

//multiplication table
void multiple(int n){
    for(int i=1; i<=20; ++i){
        cout << n << " * "<< i << " = " << n*i << endl;
    }

}

// recursion method for the table multiplication
void mulTable(int n, int i=1){
    if(i == 11)
    return;

    cout << n << " * "<< i << " = " << n*i << endl;
    i++; mulTable(n, i);
}

int findSum(int n){
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // return sum;
    return n*(n+1)/2;
}

int squareSum(int n){
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum = sum + (i*i);
    // }
    // return sum;
    return (n*(n+1) * (2*n+1))/6;
}

void swapNum(int &a, int &b){
    swap(a, b);
    // No return needed for void function
}



int main(){
    // string m = "216845132136546513214654321657";
    // int n = 5421252;

    // if(is_even(n))
    //     cout << "true";
    // else
    //     cout << "false";
    // return 0;
    // int a = 10;
    // int b = 15;

    // multiple(7);
    // mulTable(4);
    // cout << findSum(3) << endl;
    // cout << squareSum(2) << endl;
    // swap(a, b);
    // cout << "a: " << a << ", b: " << b << endl;

    return 0;
}