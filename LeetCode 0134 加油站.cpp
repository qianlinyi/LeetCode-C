// 分类：贪心
// Created by 旺崽 on 2021/11/23.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int n = gas.size(), spare = 0, ans, minSpare = INT32_MAX;
        for (int i = 0; i < n; i++) {
            spare += gas[i] - cost[i];
            if (spare < minSpare) {
                minSpare = spare;
                ans = i;
            }
        }
        return spare < 0 ? -1 : (ans + 1) % n;
    }
};

int main() {
    return 0;
}
