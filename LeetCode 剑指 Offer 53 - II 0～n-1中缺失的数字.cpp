//
// Created by 旺崽 on 2021/11/19.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
    }
};

int main() {
    return 0;
}