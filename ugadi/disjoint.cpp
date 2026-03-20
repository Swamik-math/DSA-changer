#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool disjoint(vector<int> &a, vector<int> &b){

    unordered_set<int> mp(a.begin(), a.end());

    for(int x : b){
        if(mp.find(x) != mp.end() )
            return false;
    }
    return true;
}

bool areDisjoint(vector<int> &a, vector<int> &b){

    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] == b[j])
                return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {12, 34, 11, 9, 3}; 
    vector<int> b = {7, 2, 1, 5}; 
    
    if (areDisjoint(a, b))
        cout << "True";
    else
        cout << "False";
        
    return 0;
}