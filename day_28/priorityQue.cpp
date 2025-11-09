#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int>> q;

    q.push(5);
    q.push(7);
    q.push(8);
    q.push(3);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }
    cout << endl;
    return 0;

}


/*
PRIORITY QUEUE - 

> priority queue internally use max and min heap trees
> max and min heap are complete binary trees
> it is internally  a tree structure.

> at the top always a highest priority element will be present.

time complexity = O(log n)
*/