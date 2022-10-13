// 分类：DFS
// Created by 旺崽 on 2021/11/22.
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
    bool recur(TreeNode *A, TreeNode *B) {
        if (A == nullptr && B == nullptr) return true;
        if (A == nullptr || B == nullptr || A->val != B->val) return false;
        return (recur(A->left, B->right) && recur(A->right, B->left));
    }

    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return recur(root, root);
    }
};

int main() {
    return 0;
}