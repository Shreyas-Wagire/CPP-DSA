#include <iostream>
using namespace std;

class Solution {
public:
    void searchRange(int nums[], int n, int target, int result[]) {
        result[0] = -1;
        result[1] = -1;

        if (n == 0) return;

        // -------- Find First Position --------
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                result[0] = mid;      // possible first position
                high = mid - 1;       // move left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // -------- Find Last Position --------
        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                result[1] = mid;      // possible last position
                low = mid + 1;        // move right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
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

    return 0;
}


/*

Dry Run

Input
    nums = [5, 7, 7, 8, 8, 10]
    target = 8

First Position Search
        mid = 3 → nums[3] = 8 → store 3 → move left
        mid = 2 → nums[2] = 7 → move right
        ✔ First position = 3

Last Position Search
        mid = 3 → nums[3] = 8 → store 3 → move right
        mid = 4 → nums[4] = 8 → store 4 → move right
        ✔ Last position = 4

Final Output
    [3, 4]

*/