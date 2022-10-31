//
// Created by 旺崽 on 2021/11/24.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>> &grid) {
        int r = grid.size();
        if (r == 0) return 0;
        int c = grid[0].size();
        vector<vector<int>> dp(r, vector<int>(c, 0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == 0 && j == 0) dp[i][j] = grid[i][j];
                else if (i == 0) dp[i][j] = grid[i][j] + dp[i][j - 1];
                else if (j == 0) dp[i][j] = grid[i][j] + dp[i - 1][j];
                else dp[i][j] = grid[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[r - 1][c - 1];
    }
};

int main() {
    return 0;
}