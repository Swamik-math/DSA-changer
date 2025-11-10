#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> s;

    s.insert(1);
    s.insert(11);
    s.insert(7);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    
    s.insert(4);
    s.insert(3);
    s.insert(3);

    cout << s.size() << endl;
    cout << "lower_bound = " << *(s.lower_bound(4)) << endl;
    cout << "upper_bound = " << *(s.upper_bound(4)) << endl;

    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

/*
insert, emplace
count
erase
find
size, empty, erase

O(log n) = time complexity

> lower_bound() - the value should not be less than the key value
> upper_bound() - the value should be greater than key

1. multiset<int>
2. unordered_set<int>

*/