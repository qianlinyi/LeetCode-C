//
// Created by 旺崽 on 2021/12/7.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> singleNumbers(vector<int> &nums) {
        int num = 0;
        for (auto &i: nums) num ^= i;
        int div = 1;
        while ((div & num) == 0) div <<= 1;
        int a = 0, b = 0;
        for (auto &i: nums) {
            if (div & i) a ^= i;
            else b ^= i;
        }
        return vector<int>{a, b};
    }
};

int main() {
    return 0;
}