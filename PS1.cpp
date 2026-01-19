#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target, int result[]) {
    // Complete this function
    // Store the two indices in result[0] and result[1]
    // If no answer, set result[0] = result[1] = -1;
}

int main() {
    int arr[] = {2, 7, 11, 15};   // Input: nums = [2,7,11,15]
    int n = 4;
    int target = 9;               // target = 9

    int result[2];
    twoSum(arr, n, target, result);

    if (result[0] != -1) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
        // Output: [0,1]
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
