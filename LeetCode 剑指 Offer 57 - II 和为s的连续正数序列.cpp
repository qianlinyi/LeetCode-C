//
// Created by 旺崽 on 2021/12/13.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        for (long long i = 1; i <= target / 2; i++) {
            vector<int> v;
            long long delta = (2 * i + 1) * (2 * i + 1) - 4 * (2 * i - 2 * target);
            long long a = sqrt(delta);
            if (a * a == delta) {
                int step = (a - 2 * i - 1) / 2;
                for (int j = i; j <= i + step; j++) v.emplace_back(j);
                ans.emplace_back(v);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}