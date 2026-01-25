#include <iostream>
using namespace std;

class Solution {
public:
    void searchRange(int nums[], int n, int target, int result[]) {
        // User will write logic here

        // Given a sorted array of integers nums and a target value target, find the first and last position of the target.
        // If the target is not found, return [-1, -1].
        // result[0] = first position
        // result[1] = last position
        // If not found, both should be -1
    }
};

int main() {
    Solution sol;

    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    int result[2];
    sol.searchRange(nums, n, target, result);

    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    /*
    Expected Output:
    [3, 4]
    */

    /*
    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]

    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]

    Input: nums = [], target = 0
    Output: [-1,-1]
    */

    return 0;
}
