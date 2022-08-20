// 分类：DFS
// Created by 旺崽 on 2021/11/10.
//

#include "bits/stdc++.h"

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    vector<vector<int>> ans;
public:
    void dfs(TreeNode *a, vector<int> &v, int targetSum) {
        v.push_back(a->val);
        if (a->left == nullptr && a->right == nullptr) {
            if (accumulate(v.begin(), v.end(), 0) == targetSum) ans.push_back(v);
            return;
        }
        if (a->left != nullptr) dfs(a->left, v, targetSum), v.pop_back();
        if (a->right != nullptr) dfs(a->right, v, targetSum), v.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
        vector<int> a;
        if (root == nullptr) return ans;
        dfs(root, a, targetSum);
        return ans;
    }
};

int main() {
    return 0;
}