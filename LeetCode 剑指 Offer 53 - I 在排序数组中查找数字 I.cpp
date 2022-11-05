//
// Created by 旺崽 on 2021/11/19.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int pos1 = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int pos2 = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        return pos2 - pos1;
    }
};

int main() {
    return 0;
}
