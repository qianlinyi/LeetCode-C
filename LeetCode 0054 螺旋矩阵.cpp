// 分类：模拟
// Created by 旺崽 on 2021/11/2.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return {};
        int r = matrix.size(), c = matrix[0].size();
        vector<int> order;
        int left = 0, right = c - 1, top = 0, bottom = r - 1;
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) order.push_back(matrix[top][i]);
            for (int i = top + 1; i <= bottom; i++) order.push_back(matrix[i][right]);
            if (left < right && top < bottom) {
                for (int i = right - 1; i >= left; i--) order.push_back(matrix[bottom][i]);
                for (int i = bottom - 1; i > top; i--) order.push_back(matrix[i][left]);
            }
            left++, right--, top++, bottom--;
        }
        return order;
    }
};


int main() {
    return 0;
}
