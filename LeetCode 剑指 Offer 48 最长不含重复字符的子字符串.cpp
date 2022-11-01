// 分类：双指针，DP
// Created by 旺崽 on 2021/11/25.
//

#include "bits/stdc++.h"

using namespace std;

/* 双指针
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, ans = 0;
        vector<int> cnt(200, 0);
        while (r < s.size()) {
            cnt[s[r]]++;
            while (l < s.size() && cnt[s[r]] > 1) {
                cnt[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};*/

// 动态规划
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        int ans = 1;
        vector<int> dp(s.size(), 0);
        vector<int> pos(200, -1);
        dp[0] = 1;
        pos[s.front()] = 0;
        for (int i = 1; i < s.size(); i++) {
            if (dp[i - 1] < i - pos[s[i]]) dp[i] = dp[i - 1] + 1;
            else dp[i] = i - pos[s[i]];
            pos[s[i]] = i;
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

int main() {
    return 0;
}