#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(int nums[], int n, int target) {
        
          // Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
        // Use Binary Search (O(log n))

        return -1; // placeholder
    }
};

int main() {
    Solution sol;

    int nums[] = {1, 3, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 5;

    int result = sol.searchInsert(nums, n, target);

    cout << "Search Insert Position: " << result << endl;

    /*
    Example Outputs:
    nums = [1,3,5,6], target = 5  -> Output: 2
    nums = [1,3,5,6], target = 2  -> Output: 1
    nums = [1,3,5,6], target = 7  -> Output: 4
    */

    return 0;
}
