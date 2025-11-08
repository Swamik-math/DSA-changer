#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_front(6);
    l.pop_back();
    l.pop_front();
    l.emplace_back(100);
    l.emplace_front(102);

    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}



/*
LIST

push_back & push_front
emplace_back & emplace_front
pop_back & pop_front

> size, erase, clear, begin, end, rbegin, rend, 
  front, back
*/