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
        if (B == nullptr) return true;
        if (A == nullptr) return false;
        return ((A->val == B->val) && recur(A->left, B->left) && recur(A->right, B->right));
    }

    bool isSubStructure(TreeNode *A, TreeNode *B) {
        if (A == nullptr || B == nullptr) return false;
        return ((A->val == B->val) && recur(A, B)) || (isSubStructure(A->left, B) || isSubStructure(A->right, B));
    }
};

int main() {
    return 0;
}
