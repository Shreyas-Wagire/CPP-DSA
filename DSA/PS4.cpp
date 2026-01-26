#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(int arr[], int n) {
        // USER WRITES CODE HERE


        
    }
};

int main() {
    Solution sol;

    // Input already given
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    sol.moveZeroes(arr, n);

    // Output
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
