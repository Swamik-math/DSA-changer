#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int digsum(string n){
    int sum = 0;
    // for(int i=0; i<n.size(); i++){
    //     sum += n[i] - '0';
    // }
    for(char ch:n){
        sum += ch - '0';
    }
    return sum;
}


// by using the last number
int sumOfnum(int n){
    int sum = 0;
    while(n != 0){

        int last = n%10;
        sum += last;
        n = n/10;
    }
    return sum;
}

string reverseNum(int n){
    string m = to_string(n);
    reverse(m.begin(), m.end());

    return m;
}

int reverseNums(int n){
    string m = to_string(n);
    reverse(m.begin(), m.end());
    n = stoi(m);

    return n;
}

int comReverse(int n){
    int revNum = 0;
    while(n>0){
        revNum = revNum * 10 + n%10;
        n /= 10;
    }
    return revNum;
}

bool isPrime(int n){
    if(n <= 1)
        return false;

    for(int i=2; i<n; i++){
        if(n%i == 0)
            return false;
        
            return true;
    }
}

bool powerS(int x, int y){
    // if(y == 1)
    // return true;
    if(x == 1)
        return y == 1;

    
    while(y>1){
        if(y%x != 0)
            return false;
        y = y/x;
    }
    return true;
}

int main(){
    string j = "32165846543516546579851321654";
    int x = 10;
    int y = 1001;

    int m = powerS(x, y);
    if(m == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    // cout << digsum(m) << endl;
    // cout << sumOfnum(x) << endl;
    // cout << comReverse(1234567890) << endl;
    // cout << reverseNum(1234567890) << endl;

}