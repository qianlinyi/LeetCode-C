//
// Created by 旺崽 on 2021/11/23.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int ans = 0, mn = INT32_MAX;
        for (auto i: prices) {
            ans = max(ans, i - mn);
            mn = min(mn, i);
        }
        return ans;
    }
};

int main() {
    return 0;
}
