// 标签：双指针
// Created by 旺崽 on 2021/10/26.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> twoSum(vector<int> &nums, int start, int end, int target, int value) {
        vector<vector<int>> ans;
        while (start < end) {
            int sum = nums[start] + nums[end];
            if (sum == target) {
                vector<int> result;
                result.push_back(value);
                result.push_back(nums[start]);
                result.push_back(nums[end]);
                ans.push_back(result);
                while (start < end && nums[start] == nums[start + 1]) start++;
                start++;
                while (start < end && nums[end] == nums[end - 1]) end--;
                end--;
            } else if (sum < target) start++;
            else end--;
        }
        return ans;
    }

    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            auto result = twoSum(nums, i + 1, n - 1, -nums[i], nums[i]);
            ans.insert(ans.end(),result.begin(),result.end());
        }
        return ans;
    }
};


int main() {
    return 0;
}