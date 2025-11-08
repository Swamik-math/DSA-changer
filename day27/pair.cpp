#include<iostream>

using namespace std;

int main(){
    pair<int , int> p = {1, 3};
    pair<char, int> mom = {'n', 6};
    pair<int , pair<int, char>> no = {1, {78, 'north'}};

    cout << p.first << endl;
    cout << mom.first << endl;
    cout << no.first << endl;

    cout << p.second << endl;
    cout << mom.second << endl;
    cout << no.second.second << endl;

    return 0;
}