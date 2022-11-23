//
// Created by 旺崽 on 2021/12/8.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> constructArr(vector<int> &a) {
        int sum1 = 1, cnt = 0, sum2 = 1;
        for (auto &i: a) {
            sum1 *= i;
            if (i == 0) cnt++;
            else sum2 *= i;
        }
        vector<int> ans;
        for (auto &i: a) {
            if (i) ans.emplace_back(sum1 / i);
            else ans.emplace_back(cnt > 1 ? 0 : sum2);
        }
        return ans;
    }
};

int main() {
    return 0;
}