//
// Created by 旺崽 on 2021/11/20.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target) {
        int r = matrix.size();
        if (r == 0) return false;
        int c = matrix[0].size();
        if (c == 0) return false;
        int x = 0, y = c - 1;
        while (x < r && y >= 0) {
            if (matrix[x][y] == target) return true;
            if (matrix[x][y] > target) y--;
            else x++;
        }
        return false;
    }
};

int main() {
    return 0;
}