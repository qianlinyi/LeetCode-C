//
// Created by 旺崽 on 2021/10/26.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int l = 0, r = height.size() - 1, ans = 0;
        while (l <= r) {
            ans = max(ans, min(height[l], height[r]) * (r - l));
            if (height[l] > height[r]) r--;
            else l++;
        }
        return ans;
    }
};

int main() {
    return 0;
}
