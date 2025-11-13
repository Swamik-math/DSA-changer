/*
> In  programin if any word is written in " " - then it is called as string.
> char arrys - 

'\0' = null character in string.

> to print entire line - cin.getline( str, len, delim?)
     delim - delimiter

*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    // char ni[] = "monorola";
    // cout << str << endl;
    // cout << strlen(str) << endl;
    // cout << strlen(ni) << endl;

    // char str[12];
    
    // cout << "Enter the string: ";
    // cin.getline(str, 12);
    // // cout << "output : " << str << endl;

    // for(char ch : str){
    //     cout << ch << " ";

    // }
    // cout << endl;

    char str[] = "apnacollege";
    int len = 0;

    for(int i=0; i< str[i] != '\0'; i++){
        len ++;
    }
    cout << "String length is = " << len << endl;

    return 0;
}