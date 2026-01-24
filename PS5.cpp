#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // User will complete this function
    }
};

int main() {
    Solution obj;
    string s;

    cin >> s;   // Example input: ()[]{}

    bool result = obj.isValid(s);

    if (result)
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}

/*
Sample Input 1:
()[]{}

Output:
Valid Parentheses

Sample Input 2:
([)]

Output:
Invalid Parentheses

Sample Input 3:
((()))

Output:
Valid Parentheses
*/
