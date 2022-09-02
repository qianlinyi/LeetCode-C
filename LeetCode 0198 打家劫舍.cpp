// 分类：DP
// Created by 旺崽 on 2021/11/8.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        if (nums.size() <= 2) return *max_element(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0], dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return max(*(dp.end() - 1), *(dp.end() - 2));
    }
};

int main() {
    return 0;
}