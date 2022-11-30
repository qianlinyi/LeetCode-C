//
// Created by 崽崽 on 2022/11/30.
//

# include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            ans.emplace_back(__builtin_popcount(i));
        }
        return ans;
    }
};

class Solution2 {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i & (i - 1)] + 1;
        }
        return ans;
    }
};