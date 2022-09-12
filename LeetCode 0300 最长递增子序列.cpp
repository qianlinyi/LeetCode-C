// 分类：DP
// Created by 旺崽 on 2021/11/6.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<int> dp;
public:
    int lengthOfLIS(vector<int> &nums) {
        for (auto i: nums) {
            if (dp.empty() || i > dp.back()) dp.push_back(i);
            else {
                int pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
                dp[pos] = i;
            }
        }
        return dp.size();
    }
};

int main() {
    return 0;
}
