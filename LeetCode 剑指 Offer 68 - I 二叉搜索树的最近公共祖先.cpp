//
// Created by 旺崽 on 2021/12/4.
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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root->val > max(p->val, q->val)) return lowestCommonAncestor(root->left, p, q);
        else if (root->val < min(p->val, q->val)) return lowestCommonAncestor(root->right, p, q);
        else return root;
    }
};

int main() {
    return 0;
}
