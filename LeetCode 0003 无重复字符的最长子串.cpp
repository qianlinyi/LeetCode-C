// 标签：双指针
// Created by 旺崽 on 2021/11/1.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int flag[250] = {0}, l = 0, r = 0, ans = 0;
        while (r < s.size()) {
            while (l < s.size() && flag[s[r]]) flag[s[l]] = 0, l++;
            while (r < s.size() && !flag[s[r]]) flag[s[r]] = 1, r++;
            ans = max(ans, r - l);
        }
        return ans;
    }
};


int main() {
    return 0;
}
