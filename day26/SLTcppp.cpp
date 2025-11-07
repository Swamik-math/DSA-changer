#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,0};
    
    vec.erase(vec.begin()+1, vec.begin()+3);

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}