#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(int arr[], int n) {

        int index = 0;  
        // 'index' keeps track of the position
        // where the next non-zero element should go

        // Traverse the array
        for (int i = 0; i < n; i++) {

            // If current element is non-zero
            if (arr[i] != 0) {

                // Place the non-zero element at 'index'
                arr[index] = arr[i];

                // Move index to next position
                index++;
            }
        }

        // After placing all non-zero elements,
        // fill remaining positions with zeroes
        while (index < n) {
            arr[index] = 0;
            index++;
        }
    }
};

int main() {
    Solution sol;

    // Input already given
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    // Move zeroes to the end
    sol.moveZeroes(arr, n);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Output: 1 3 12 0 0

    return 0;
}
