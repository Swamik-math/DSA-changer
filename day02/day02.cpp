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

// ASCII  = it is a number given to the characters
// [A-Z] = (65 - 90)       [a - z] = (97 - )
//  we can also use ascii value to find wheather the code is upper or lower case

// Ternary statements
//        condition ? stt 1 : stt 2;

