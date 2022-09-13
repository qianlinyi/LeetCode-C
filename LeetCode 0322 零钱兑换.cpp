//
// Created by 旺崽 on 2021/11/9.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (auto j: coins) {
                if (i >= j) dp[i] = min(dp[i], dp[i - j] + 1);
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};

int main() {
    return 0;
}
