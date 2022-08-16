// 标签：二叉树，BFS
// Created by 旺崽 on 2021/11/1.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        queue<TreeNode *> q;
        q.push(root);
        int flag = 0;
        while (!q.empty()) {
            vector<int> a;
            int siz = q.size();
            while (siz--) {
                a.push_back(q.front()->val);
                if (q.front()->left != nullptr) q.push(q.front()->left);
                if (q.front()->right != nullptr) q.push(q.front()->right);
                q.pop();
            }
            if (flag) reverse(a.begin(), a.end());
            flag ^= 1;
            ans.push_back(a);
        }
        return ans;
    }
};

int main() {
    return 0;
}