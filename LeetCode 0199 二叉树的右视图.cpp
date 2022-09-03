//
// Created by 旺崽 on 2021/10/29.
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
    vector<int> rightSideView(TreeNode *root) {
        vector<int> ans;
        deque<TreeNode *> q;
        if (root == NULL) return ans;
        q.push_back(root);
        while (!q.empty()) {
            ans.push_back(q.back()->val);
            int siz = q.size();
            while (siz--) {
                if (q.front()->left != NULL) q.push_back(q.front()->left);
                if (q.front()->right != NULL) q.push_back(q.front()->right);
                q.pop_front();
            }
        }
        return ans;
    }
};


int main() {
    return 0;
}

