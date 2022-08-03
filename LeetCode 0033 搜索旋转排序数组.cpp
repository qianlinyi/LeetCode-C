// 分类：二分
// Created by 旺崽 on 2021/10/27.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + r >> 1;
            int a = nums[l], b = nums[mid], c = nums[r];
            if (a == target) return l;
            if (b == target) return mid;
            if (c == target) return r;
            if (a < b) {
                if (a < target && target < b) r = mid - 1;
                else l = mid + 1;
            } else {
                if (b < target && target < c) l = mid + 1;
                else r = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    return 0;
}