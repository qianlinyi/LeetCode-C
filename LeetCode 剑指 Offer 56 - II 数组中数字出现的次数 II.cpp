//
// Created by 旺崽 on 2021/12/7.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int one = 0, two = 0;
        for (auto &num: nums) {
            one = one ^ num & ~two;
            two = two ^ num & one;
        }
        return one;
    }
};

int main() {
    return 0;
}