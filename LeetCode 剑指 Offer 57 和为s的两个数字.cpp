//
// Created by 旺崽 on 2021/11/28.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    map<int, int> mp;
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> ans;
        for (auto &i: nums) mp[i] = 1;
        for (auto &i: nums) {
            if (mp[i] && mp[target - i]) {
                ans.emplace_back(i);
                ans.emplace_back(target - i);
                break;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}