// 分类：数论
// Created by 旺崽 on 2021/11/24.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1, flag = 0, a = x;
        long long e = n;
        if (e < 0) e = -e, flag = 1;
        while (e) {
            if (e & 1) ans *= a;
            a = a * a;
            e >>= 1;
        }
        if (flag) return 1 / ans;
        return ans;
    }
};

int main() {
    return 0;
}
