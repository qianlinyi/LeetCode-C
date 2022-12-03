//
// Created by 崽崽 on 2022/12/3.
//

#include "vector"

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        size_t n = cost.size();
        vector<int> dp(n + 1);
        dp[0] = dp[1] = 0;
        for (size_t i = 2; i <= n; i++) {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
    }
};