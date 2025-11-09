#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){

    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 190990;
    m["laptop"] = 190947;
    m["laptop"] = 190991;
    m["shoes"] = 3874;

    m.erase("tv");
    m.insert({"camera", 82783});

    for(auto p:m){
        cout << p.first << " " << p.second << endl;

    }
    cout << "count = " << m.count("laptop") << endl;

    if(m.find("tv") != m.end()){
        cout << "found\n";
    }else{
        cout << "not-found\n";
    }
    return 0;
}