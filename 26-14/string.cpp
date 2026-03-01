#include<iostream>
using namespace std;

int stringRead(string n){

    int maxD = '0';

    for(char c: n){
        if(c > maxD)
            maxD = c;
        cout << c << endl;
    }
    cout << maxD << endl;
}

int main(){
    string m = "Supreet";
    stringRead(m);
    return 0;
}