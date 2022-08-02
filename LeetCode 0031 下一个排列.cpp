// 分类：思维
// Created by 旺崽 on 2021/11/1.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;
        if (i >= 0) {
            int j = nums.size() - 1;
            while (j >= 0 && nums[i] >= nums[j]) j--;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};


int main() {
    return 0;
}