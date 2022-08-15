// 分类：BFS
// Created by 旺崽 on 2021/11/5.
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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int siz = q.size();
            vector<int> a;
            for (int i = 0; i < siz; i++) {
                if (q.front()->left != nullptr) q.push(q.front()->left);
                if (q.front()->right != nullptr) q.push(q.front()->right);
                a.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(a);
        }
        return ans;
    }
};

int main() {
    return 0;
}
