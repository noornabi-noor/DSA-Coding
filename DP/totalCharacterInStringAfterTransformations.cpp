#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    int lengthAfterTransformations(string s, int t) {
        // dp[i][j] = length of transformed character (a + i) after j transformations
        vector<vector<int>> dp(26, vector<int>(t + 1, 0));

        // Base case: at t = 0, each character is itself → length = 1
        for (int i = 0; i < 26; ++i) {
            dp[i][0] = 1;
        }

        // Fill dp table
        for (int j = 1; j <= t; ++j) {
            for (int i = 0; i < 26; ++i) {
                if (i == 25) {
                    // 'z' → "ab"
                    dp[i][j] = (dp[0][j - 1] + dp[1][j - 1]) % MOD;
                } else {
                    // other → next character
                    dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }

        // Compute final length
        long long result = 0;
        for (char c : s) {
            int idx = c - 'a';
            result = (result + dp[idx][t]) % MOD;
        }

        return (int)result;
    }
};

// Example usage
int main() {
    Solution sol;

    string s1 = "abcyy";
    int t1 = 2;
    cout << "Output 1: " << sol.lengthAfterTransformations(s1, t1) << endl;

    string s2 = "azbk";
    int t2 = 1;
    cout << "Output 2: " << sol.lengthAfterTransformations(s2, t2) << endl;

    return 0;
}
