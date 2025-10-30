#include <iostream>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int days = n % 7;

        int total = weeks * 28 + 7 * (weeks * (weeks - 1)) / 2;
        total += days * weeks + (days * (days + 1)) / 2;
        return total;
    }
};

int main() {
    int n;
    if (!(cin >> n)) return 0;
    Solution sol;
    cout << sol.totalMoney(n) << endl;
    return 0;
}