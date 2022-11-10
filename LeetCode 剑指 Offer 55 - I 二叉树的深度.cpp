//
// Created by 旺崽 on 2021/12/3.
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
    int ans;

    void dfs(TreeNode *root, int depth) {
        if (root->left == nullptr && root->right == nullptr) {
            ans = max(ans, depth);
            return;
        }
        if (root->left != nullptr) dfs(root->left, depth + 1);
        if (root->right != nullptr) dfs(root->right, depth + 1);
    }

public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) return ans;
        dfs(root, 1);
        return ans;
    }
};

int main() {
    return 0;
}