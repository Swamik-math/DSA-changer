/*

ou are given a 2D integer array intervals where intervals[i] = [starti, endi] represents all the integers from starti to endi inclusively.

A containing set is an array nums where each interval from intervals has at least two integers in nums.

For example, if intervals = [[1,3], [3,7], [8,9]], then [1,2,4,7,8,9] and [2,3,4,8,9] are containing sets.
Return the minimum possible size of a containing set.

 

Example 1:

Input: intervals = [[1,3],[3,7],[8,9]]
Output: 5
Explanation: let nums = [2, 3, 4, 8, 9].
It can be shown that there cannot be any containing array of size 4.
Example 2:

Input: intervals = [[1,3],[1,4],[2,5],[3,5]]
Output: 3
Explanation: let nums = [2, 3, 4].
It can be shown that there cannot be any containing array of size 2.
Example 3:

Input: intervals = [[1,2],[2,3],[2,4],[4,5]]
Output: 5
Explanation: let nums = [1, 2, 3, 4, 5].
It can be shown that there cannot be any containing array of size 4.

*/


class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        
        // Step 1: Sort intervals by end increasing, and if tie, start decreasing
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });

        vector<int> selected;  // store chosen points

        // Step 2: Process intervals one by one
        for (auto &it : intervals) {
            int L = it[0], R = it[1];

            // Count how many selected points lie inside [L, R]
            int count = 0;
            for (int i = selected.size() - 1; i >= 0; i--) {
                if (selected[i] >= L && selected[i] <= R) count++;
                if (selected[i] < L) break;  // no need to check earlier points
            }

            // If count == 0 → need 2 points
            if (count == 0) {
                selected.push_back(R - 1);
                selected.push_back(R);
            }
            // If count == 1 → need 1 more point
            else if (count == 1) {
                selected.push_back(R);
            }
            // If count >= 2 → do nothing
        }

        return selected.size();
    }
};
