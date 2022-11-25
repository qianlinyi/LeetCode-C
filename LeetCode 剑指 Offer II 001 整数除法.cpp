//
// Created by 崽崽 on 2022/11/24.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int divide(int a, int b) {
        int ans = 0;
        // 特殊情况
        if (a == INT_MIN) {
            if (b == 1) {
                return INT32_MIN;
            }
            if (b == -1) {
                return INT32_MAX;
            }
            a += abs(b);
            ans += 1;
        }
        if (b == INT_MIN) {
            return a == INT_MIN ? 1 : 0;
        }
        if (a == 0) {
            return 0;
        }
        bool sig = ((a > 0) ^ (b > 0)) != 0;
        a = abs(a), b = abs(b);
        for (int i = 31; ~i; i--) {
            if ((a >> i) >= b) {
                a -= (b << i);
                ans += 1 << i;
            }
        }
        return sig ? -ans : ans;
    }
};