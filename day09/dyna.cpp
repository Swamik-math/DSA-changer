//static memory - memory is allocated in the compile time only 
/*
dynamic allocation - memory allocation is done in the run time
in vectors the memory is allocated dynamically, that's why we can resize
* Static memory allocation is done in the static memory.
* Dynamic ,e,ory allocation is done in the HEAP  memory.

vector - 1. size: no.of elements
        2.capacity : total memory


*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    vec.push_back(5);
    

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}