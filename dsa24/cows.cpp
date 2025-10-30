#include <iostream>
#include <vector>
#include <algorithm> // ✅ Required for sort()
using namespace std;

// Function to check if we can place C cows with at least 'minAllowedDist' apart
bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) {
    int cows = 1; // place first cow at first stall
    int lastStallPos = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }

        if (cows == C)
            return true;
    }
    return false;
}

// Function to get the largest minimum distance
int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end()); // ✅ sort stall positions

    int st = 1;
    int end = arr[N - 1] - arr[0];
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, N, C, mid)) {
            ans = mid;      // possible, try for bigger distance
            st = mid + 1;
        } else {
            end = mid - 1;  // not possible, try smaller distance
        }
    }
    return ans;
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}
