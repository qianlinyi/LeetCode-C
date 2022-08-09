// 分类：DFS
// Created by 旺崽 on 2021/11/6.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<vector<int>> ans;
    int siz;
public:
    void dfs(int id, vector<int> &choose, vector<int> &nums) {
        if (id == siz) {
            vector<int> a;
            for (int i = 0; i < siz; i++) if (choose[i]) a.push_back(nums[i]);
            ans.push_back(a);
            return;
        }
        choose.push_back(0);
        dfs(id + 1, choose, nums);
        choose.pop_back();
        choose.push_back(1);
        dfs(id + 1, choose, nums);
        choose.pop_back();
    }

    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> choose;
        siz = nums.size();
        dfs(0, choose, nums);
        return ans;
    }
};

int main() {
    return 0;
}
