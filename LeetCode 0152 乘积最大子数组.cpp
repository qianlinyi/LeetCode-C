//
// Created by 旺崽 on 2021/11/23.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int mx = nums.front(), mn = nums.front(), ans = nums.front();
        for (int i = 1; i < nums.size(); i++) {
            int mxx = mx, mnn = mn;
            mx = max({nums[i] * mxx, nums[i] * mnn, nums[i]});
            mn = min({nums[i] * mnn, nums[i] * mxx, nums[i]});
            ans = max(ans, mx);
        }
        return ans;
    }
};

int main() {
    return 0;
}
