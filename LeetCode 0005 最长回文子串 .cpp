// 分类：DP
// Created by 旺崽 on 2021/10/25.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), pos = 0, ans = 1;
        vector<vector<int>> dp;
        dp.resize(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) dp[i][i] = 1;
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {
                if (j - i < 3) dp[i][j] = (s[i] == s[j]);
                else dp[i][j] = ((s[i] == s[j]) && (dp[i + 1][j - 1]));
                if (dp[i][j]) {
                    if (j - i + 1 > ans) {
                        ans = j - i + 1;
                        pos = i;
                    }
                }
            }
        }
        return s.substr(pos, ans);
    }
};

int main() {
    return 0;
}