#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        int n = s.length();

        // Create an array to act as stack
        char st[n];

        int top = -1;  
        // 'top' represents the index of the stack top
        // -1 means stack is empty

        // Traverse the string
        for (int i = 0; i < n; i++) {

            char ch = s[i];

            // If opening bracket, push into stack
            if (ch == '(' || ch == '{' || ch == '[') {
                top++;
                st[top] = ch;
            }
            // If closing bracket
            else {

                // If stack is empty, no opening bracket to match
                if (top == -1) {
                    return false;
                }

                // Get the top element
                char last = st[top];
                top--;

                // Check if brackets match
                if ((ch == ')' && last != '(') ||
                    (ch == '}' && last != '{') ||
                    (ch == ']' && last != '[')) {
                    return false;
                }
            }
        }

        // If stack is empty, all brackets matched
        return top == -1;
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



// We simulate a stack using an array
// top keeps track of the stack’s top element
// Opening bracket → push
// Closing bracket → pop & match
// If mismatch or stack empty → ❌ invalid
// At the end:
// top == -1 → ✅ valid
// else → ❌ invalid


// ================ DRY RUN ===============

// (  → push
// )  → pop & match
// [  → push
// ]  → pop & match
// {  → push
// }  → pop & match
// Stack empty → VALID