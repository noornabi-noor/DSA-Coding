#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        int n = s.size();
        int left = 0, maxLength = 0;
        vector<int> lastIndex(26, -1);  // For lowercase letters only

        for (int right = 0; right < n; ++right) {
            char ch = s[right];
            if (lastIndex[ch - 'a'] >= left) {
                left = lastIndex[ch - 'a'] + 1;
            }
            lastIndex[ch - 'a'] = right;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int result = sol.longestUniqueSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}
