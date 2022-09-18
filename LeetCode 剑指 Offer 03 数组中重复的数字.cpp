//
// Created by 旺崽 on 2021/11/19.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        vector<int> cnt(nums.size(), 0);
        int ans = 0;
        for (auto i: nums) {
            cnt[i]++;
            if (cnt[i] > 1) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}