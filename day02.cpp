// to find lower and upper case character

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if( ch >= 'a' && ch <= 'z'){
        cout << "The entered character is in lower case.";
    }
    else if( ch >= 'A' && ch <= 'Z'){
        cout << "The character is in upper case.";
    }
    else{
        cout << "Invalid input you gave.";
    }


    return 0;
}