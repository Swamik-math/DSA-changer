#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "racecarm";
    string r = s;

    reverse(r.begin(), r.end());

    if( s == r){
        cout << "The string is palindrome."<< endl;
    } else {
        cout << "NOt a palindrome." << endl;
    }
    return 0;
}