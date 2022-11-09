//
// Created by 旺崽 on 2021/11/30.
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
    vector<int> v;
public:
    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        v.emplace_back(root->val);
        dfs(root->right);
    }

    int kthLargest(TreeNode *root, int k) {
        dfs(root);
        return v[v.size() - k];
    }
};

int main() {
    return 0;
}