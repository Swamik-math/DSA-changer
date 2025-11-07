#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> vec = {1,2,3,4,5,6,7,8,9,0};
    
//     vec.erase(vec.begin()+1, vec.begin()+3);
//     vec.insert(vec.begin() +2, 100);

//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//    cout << "is empty : " << vec.empty() << endl;

//     return 0;
// }

// clear
// empty
// erase
// insert

int main(){

    vector<int> vec = {1,2,3,4,5,6,7};

    cout << "vec.begin : " << *(vec.begin()) << endl;
    cout << "vec.end : " << *(vec.end()) << endl;

    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << endl;
    }

    vector<int>::reverse_iterator it;
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << endl;
    }

    return 0;
}