//
// Created by 旺崽 on 2021/10/28.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int partition(int l, int r, int index, vector<int> &nums) {
        int key = nums[index], start = l;
        swap(nums[index], nums[r]);
        for (int i = l; i <= r; i++) {
            if (nums[i] < key) {
                swap(nums[start], nums[i]);
                start++;
            }
        }
        swap(nums[start], nums[r]);
        return start;
    }

    int quickselect(int l, int r, int k, vector<int> &nums) {
        if (l == r) return nums[l];
        srand(time(0));
        int index = l + rand() % (r - l + 1);
        index = partition(l, r, index, nums);
        if (k == index) return nums[k];
        else if (k < index) {
            return quickselect(l, index - 1, k, nums);
        } else return quickselect(index + 1, r, k, nums);
    }

    int findKthLargest(vector<int> &nums, int k) {
//        库函数
//        sort(nums.rbegin(), nums.rend());
//        return nums[k - 1];
//        堆
//        priority_queue<int, vector<int>, greater<>> q;
//        for (auto i:nums) {
//            if (q.size() < k) q.push(i);
//            else {
//                if (i > q.top()) q.pop(), q.push(i);
//            }
//        }
//        return q.top();
        return quickselect(0, nums.size() - 1, nums.size() - k, nums);
    }
};

int main() {
    return 0;
}