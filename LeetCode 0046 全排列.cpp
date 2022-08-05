// 分类：DFS
// Created by 旺崽 on 2021/10/27.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<int> vis;
    int n;
public:
    void dfs(int id, vector<int> &a, vector<int> &nums, vector<vector<int>> &ans) {
        if (id == n) {
            vector<int> c;
            for (auto i: a) c.push_back(nums[i]);
            ans.push_back(c);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                vis[i] = 1;
                a.push_back(i);
                dfs(id + 1, a, nums, ans);
                a.pop_back();
                vis[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums) {
        vector<int> a;
        vector<vector<int>> ans;
        n = nums.size();
        vis.resize(n, 0);
        dfs(0, a, nums, ans);
        return ans;
    }
};


int main() {
//    vector<int> a, b;
//    b.resize(4, 0);
//    dfs(0, a, b);
    return 0;
}