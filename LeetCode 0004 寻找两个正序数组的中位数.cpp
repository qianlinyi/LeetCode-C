//
// Created by 旺崽 on 2021/11/24.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int cnt = nums1.size() + nums2.size(), pos1 = 0, pos2 = 0;
        vector<double> v;
        while (pos1 < nums1.size() || pos2 < nums2.size()) {
            if (pos1 == nums1.size()) v.emplace_back(nums2[pos2]), pos2++;
            else if (pos2 == nums2.size()) v.emplace_back(nums1[pos1]), pos1++;
            else if (nums1[pos1] > nums2[pos2]) v.emplace_back(nums2[pos2]), pos2++;
            else v.emplace_back(nums1[pos1]), pos1++;
            if (v.size() == cnt / 2 + 1) break;
        }
        return (cnt % 2 ? v[cnt / 2] : (v[cnt / 2] + v[cnt / 2 - 1]) / 2);
    }
};

int main() {
    return 0;
}
