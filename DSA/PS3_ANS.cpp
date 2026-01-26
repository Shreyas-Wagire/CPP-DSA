#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(int arr[], int n) {

        // Set to store unique elements
        // Set automatically ignores duplicate values
        set<int> s;

        // Traverse the array
        for (int i = 0; i < n; i++) {

            // If element already exists in set
            if (s.find(arr[i]) != s.end()) {

                // Duplicate found
                return true;
            }

            // Insert current element into set
            s.insert(arr[i]);
        }

        // No duplicate found after checking all elements
        return false;
    }
};

int main() {
    Solution sol;

    // Input already given
    int arr[] = {1, 2, 3, 1};
    int n = 4;

    // Output depends on user's function
    if (sol.containsDuplicate(arr, n))
        cout << "true";   // Output: true
    else
        cout << "false";

    return 0;
}


// set stores only unique values
// While looping:
// If element is already present, duplicate exists → return true
// Else insert it into the set
// If loop ends → no duplicates → return false


// ============== Dry Run ===============================

// Array = [1, 2, 3, 1]

// Step 1: insert 1 → set = {1}
// Step 2: insert 2 → set = {1,2}
// Step 3: insert 3 → set = {1,2,3}
// Step 4: 1 already exists → duplicate found 
