// 分类：DFS
// Created by 旺崽 on 2021/11/27.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        auto match = [&](int i, int j) {
            if (i == 0) return false;
            if (p[j - 1] == '.') return true;
            return s[i - 1] == p[j - 1];
        };
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        dp[0][0] = true;
        for (int i = 0; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '*') {
                    dp[i][j] |= dp[i][j - 2];
                    if (match(i, j - 1)) dp[i][j] |= dp[i - 1][j];
                } else {
                    if (match(i, j)) dp[i][j] |= dp[i - 1][j - 1];
                }
            }
        }
        return dp[m][n];
    }
};

int main() {
    return 0;
}