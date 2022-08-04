// 分类：贪心
// Created by 旺崽 on 2021/11/17.
//
#include "bits/stdc++.h"

using namespace std;
//暴力
//class Solution {
//public:
//    int jump(vector<int> &nums) {
//        vector<int> dp(nums.size(), INT32_MAX);
//        dp[0] = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = i + 1; j <= min(int(nums.size() - 1), i + nums[i]); j++)dp[j] = min(dp[j], dp[i] + 1);
//        }
//        return dp.back();
//    }
//};

//贪心
class Solution {
public:
    int jump(vector<int> &nums) {
        int step = 0, maxPos = 0, end = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            maxPos = max(maxPos, i + nums[i]);
            if (i == end) {
                end = maxPos;
                step++;
            }
        }
        return step;
    }
};

int main() {
    return 0;
}
