#include <iostream>
using namespace std;

// Function to find two indices whose values add up to target
void twoSum(int arr[], int n, int target, int result[]) {

    // Loop to pick the first element
    for (int i = 0; i < n; i++) {

        // Loop to pick the second element (after i)
        // j starts from i+1 to avoid using the same element twice
        for (int j = i + 1; j < n; j++) {

            // Check if sum of arr[i] and arr[j] equals target
            if (arr[i] + arr[j] == target) {

                // If found, store the indices
                result[0] = i;
                result[1] = j;

                // Exit the function because solution is found
                return;
            }
        }
    }

    // If no pair is found after checking all combinations
    result[0] = -1;
    result[1] = -1;
}

int main() {

    // Given input array
    int arr[] = {2, 7, 11, 15};

    // Number of elements in array
    int n = 4;

    // Target sum
    int target = 9;

    // Array to store result indices
    int result[2];

    // Call the twoSum function
    twoSum(arr, n, target, result);

    // If result is valid (solution found)
    if (result[0] != -1) {

        // Print the indices
        cout << "Indices: " << result[0] << " " << result[1] << endl;
        // Expected Output: Indices: 0 1

    } else {

        // If no solution exists
        cout << "No solution found" << endl;
    }

    return 0; // End of program
}
