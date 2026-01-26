#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
        // Expected Time Complexity: O(log n)
        
        return -1; // placeholder
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int result = sol.searchInsert(nums, target);

    cout << "Search Insert Position: " << result << endl;

    /*
    Example Outputs:
    Input: nums = [1,3,5,6], target = 5
    Output: 2

    Input: nums = [1,3,5,6], target = 2
    Output: 1

    Input: nums = [1,3,5,6], target = 7
    Output: 4
    */

    return 0;
}
