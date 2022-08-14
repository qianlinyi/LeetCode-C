//
// Created by 旺崽 on 2021/11/25.
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
    bool isSame(TreeNode *t1, TreeNode *t2) {
        if (t1 == nullptr && t2 == nullptr) return true;
        if (t1 == nullptr || t2 == nullptr || t1->val != t2->val) return false;
        return isSame(t1->left, t2->right) && isSame(t1->right, t2->left);
    }

    bool isSymmetric(TreeNode *root) {
        return isSame(root, root);
    }
};

int main() {
    return 0;
}