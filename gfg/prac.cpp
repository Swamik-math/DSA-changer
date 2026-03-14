
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

int main(){
    string m = "216845132136546513214654321657";
    int n = 5421252;

    if(is_even(n))
        cout << "true";
    else
        cout << "false";
    return 0;
}