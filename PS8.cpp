#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void wordSubsets(string words1[], int n1,
                     string words2[], int n2,
                     string result[], int &resultSize) {

        // User will write the logic here
        // Hints:
        // 1. Create an int maxFreq[26] for words2
        // 2. For each word in words2, count freq and take maximum
        // 3. For each word in words1, count freq and compare with maxFreq
        // 4. If valid, store in result array and increase resultSize

        /*
        Simple Explination:-
                        In that question there are two arrays words1 and words2. We have to check all the letter or word of array words2 matches with words1. For example words1 = amazon, apple, facebook, google, leetcode. and words2 = e, o. 
                        See words2 in words 1. 

                        Check for the amazon = there is no e in that but o present we need both so amazon reject
                                    apple = there is e but not o so it reject
                                    facebook = there is e and o so this accepted
                                    google = both present so this accepted
                                    leetcode = both present so this also accepted.

                        Final output = facebook, google , leetcode.
        */
    }
};

int main() {
    Solution sol;

    string words1[] = {"amazon", "apple", "facebook", "google", "leetcode"};
    int n1 = 5;

    string words2[] = {"e", "o"};
    int n2 = 2;

    string result[100]; // max possible size = words1 size
    int resultSize = 0;

    sol.wordSubsets(words1, n1, words2, n2, result, resultSize);

    cout << "Universal Words: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

     /*
    Example Outputs:
    words2 = ["e","o"]
    Output: facebook google leetcode
    */

    return 0;
}
