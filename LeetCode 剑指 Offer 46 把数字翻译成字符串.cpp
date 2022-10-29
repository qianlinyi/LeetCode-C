//
// Created by 旺崽 on 2021/11/25.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int translateNum(int num) {
        vector<int> v;
        while (num) v.emplace_back(num % 10), num /= 10;
        reverse(v.begin(), v.end());
        vector<int> dp(v.size() + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= v.size(); i++) {
            dp[i] = dp[i - 1] + (i > 1 ? ((v[i - 2] * 10 + v[i - 1] <= 25 && v[i - 2]) ? dp[i - 2] : 0) : 0);
        }
        return dp[v.size()];
    }
};

int main() {
    return 0;
}
