//
// Created by 崽崽 on 2022/12/2.
//
#include "vector"

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(50);
        dp[1] = 1, dp[2] = 2;
        for (int i = 3; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};