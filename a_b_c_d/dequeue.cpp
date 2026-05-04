#include <bits/stdc++.h>
using namespace std;




int main() {
    deque<int> que;

    que.push_back(10);
    que.push_back(20);
    que.push_front(30);
    que.push_front(29);
    que.push_front(36);
    que.push_front(40);

    for(int x : que) cout << x << " ";
    cout << endl;

    que.pop_back();
    que.pop_front();


    for(int x : que) cout << x << " ";
    cout << endl;

    return 0;
}