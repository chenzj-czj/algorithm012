class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int row = text1.length();
        int col = text2.length();
        int dp[row+1][col+1];

        for (int i = 0; i <= row; i++) {
            dp[i][0] = 0;
        }
        for (int j = 0; j <= col; j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= col; j++) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[row][col];
    }
};