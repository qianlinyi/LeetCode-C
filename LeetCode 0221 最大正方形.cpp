//
// Created by 旺崽 on 2021/11/11.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>> &matrix) {
        int r = matrix.size(), c = matrix[0].size(), ans = 0;
        vector<vector<int>> dp(r, vector<int>(c, 0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == '1') {
                    if (i == 0 || j == 0) dp[i][j] = 1;
                    else {
                        dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                    }
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};

int main() {
    return 0;
}