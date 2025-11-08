#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> que = {12,2,3,4,5,6};

    que.push_back(3);
    que.push_front(5);

    que.pop_back();
    que.pop_front();

    for(int val : que){
        cout  << val << " ";
    }
    cout << endl;
    return 0;

}

// in deque we can extract a single index element , but we cannot extract any single element in the list
// that's why deque is used instead of the list
/*
sequence containers
    vector
    array
    list
    deque
*/

/*
PAIR - are the utility values of cpp

pair<int , int> = {3,5};
pair<char, int> = {'a', 1};
*/