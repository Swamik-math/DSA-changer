#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(11);
    s.insert(7);
    s.insert(4);
    s.insert(3);

    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}