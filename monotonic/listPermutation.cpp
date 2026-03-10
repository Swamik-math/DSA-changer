#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq;

    // pq.push(5);
    // pq.push(9);
    // pq.push(3);
    // pq.push(1);
    // pq.push(7);

    // while(!pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    int arr[] = {1,4,7,3,2,9,6};

    for(int x: arr){
        pq.push(x);
    }
    pq.pop();
    cout << pq.top();
}