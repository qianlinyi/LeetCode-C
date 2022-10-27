//
// Created by 旺崽 on 2021/11/24.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int sum = 0, ans = INT32_MIN;
        for (auto i: nums) {
//            if (i >= 0) {
//                if (sum <= 0) sum = i;
//                else sum += i;
//            } else {
//                if (sum + i <= 0) sum = i;
//                else sum += i;
//            }
            sum = max(sum + i, i);
            ans = max(ans, sum);
        }
        return ans;
    }
};

int main() {
    return 0;
}
