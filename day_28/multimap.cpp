#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // multimap<string, int> m;
    unordered_map<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("buds", 100);
    m.emplace("sound-box", 100);
    m.emplace("fridege", 10990);

    // m.erase("tv");
    m.erase(m.find("tv"));

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}

/*

map = O(log n)
unordered_map = O(1)


*/