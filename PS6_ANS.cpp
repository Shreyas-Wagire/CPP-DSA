#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(int nums[], int n, int target) {
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid; // target found
            }
            else if (nums[mid] < target) {
                low = mid + 1; // search right half
            }
            else {
                high = mid - 1; // search left half
            }
        }

        // low is the insert position
        return low;
    }
};

int main() {
    Solution sol;

    int nums[] = {1, 3, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 5;

    int result = sol.searchInsert(nums, n, target);

    cout << "Search Insert Position: " << result << endl;

    return 0;
}

/*
Dry Run – Search Insert Position

nums = [2, 4, 6, 8, 10]
n = 5
target = 7
Target 7 is NOT present, so we must find where to insert it.

Initial Setup
low = 0
high = 4

Index:  0  1  2  3   4
Array: [2, 4, 6, 8, 10]

Iteration 1
        mid = low + (high - low) / 2
        mid = 0 + (4 - 0) / 2 = 2

        nums[mid] = 6

        Comparison
        6 < 7  → target is on RIGHT side

        Update
        low = mid + 1 = 3

        Now:
        low = 3, high = 4

Iteration 2
        mid = 3 + (4 - 3) / 2 = 3
        nums[mid] = 8

        Comparison
        8 > 7 → target is on LEFT side

        Update
        high = mid - 1 = 2

        Now:
        low = 3, high = 2

Loop Ends
        Condition:
        low > high  →  3 > 2  ✔


Final Answer
        return low; // 3

        Insert 7 at index 3:
        [2, 4, 6, 7, 8, 10]
        ✔ Sorted order maintained
*/