
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int l=0, r=n-1;
    while(l < r){
        swap(arr[l], arr[r]); // uses BruteForce algorithm.
        l++;
        r--;
    }
}

bool isPalindrome(string s){
    int l = 0, r = s.length() -1;
    while(l < r){
        if(s[l] != s[r])
            return false; // uses two pointer approach
        l++;
        r--;
    }
    return true;
}

