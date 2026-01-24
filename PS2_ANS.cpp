#include <iostream>
using namespace std;

// Function to count even numbers in the array
int countEven(int arr[], int n) {

    int count = 0;  // Variable to store count of even numbers

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {

        // Check if the current element is even
        // A number is even if it is divisible by 2
        if (arr[i] % 2 == 0) {

            count++;  // Increase count if element is even
        }
    }

    // Return total count of even numbers
    return count;
}

int main() {

    // Input array
    int arr[] = {3, 8, 2, 7, 6, 5};

    // Size of the array
    int n = 6;

    // Call the function to count even numbers
    int ans = countEven(arr, n);

    // Print the result
    cout << "Number of even elements: " << ans << endl;
    // Expected Output: 3

    return 0;  // End of program
}
