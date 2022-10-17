//
// Created by 旺崽 on 2021/11/21.
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
public:
    vector<int> levelOrder(TreeNode *root) {
        queue<TreeNode *> q;
        vector<int> ans;
        if (root == nullptr) return ans;
        q.push(root);
        while (!q.empty()) {
            ans.push_back(q.front()->val);
            if (q.front()->left != nullptr) q.push(q.front()->left);
            if (q.front()->right != nullptr) q.push(q.front()->right);
            q.pop();
        }
        return ans;
    }
};

int main() {
    return 0;
}
