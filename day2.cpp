// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 45;

//     if(n >= 0){
//         cout << "n is positive integer.";
//     }
//     else{
//         cout << "n is a negative integer.";
//     }

//     return 0;

// }

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age > 18){
        cout << "You can vote.";
    }
    else{
        cout << "You cannot vote , you are below 18.";
    }

    return 0;
}