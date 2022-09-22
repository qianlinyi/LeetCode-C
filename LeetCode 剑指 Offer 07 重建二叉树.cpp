//
// Created by 旺崽 on 2021/12/5.
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
    TreeNode *restruct(vector<int> &preorder, vector<int> &inorder, int preL, int preR, int inL, int inR) {
        if (preL > preR) return nullptr;
        TreeNode *tree = new TreeNode();
        tree->val = preorder[preL];
        int k;
        for (k = inL; k <= inR; k++) if (inorder[k] == preorder[preL]) break;
        tree->left = restruct(preorder, inorder, preL + 1, preL + k - inL, inL, k - 1);
        tree->right = restruct(preorder, inorder, preL + k - inL + 1, preR, k + 1, inR);
        return tree;

    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return restruct(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }
};

int main() {
    return 0;
}