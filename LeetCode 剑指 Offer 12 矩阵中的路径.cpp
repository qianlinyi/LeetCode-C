//
// Created by 旺崽 on 2021/11/29.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    int row, col;

    bool dfs(int i, int j, int k, vector<vector<char>> &board, string &word) {
        if (i >= row || i < 0 || j >= col || j < 0 || board[i][j] != word[k]) return false;
        if (k == word.size() - 1) return true;
        board[i][j] = '\0';
        bool flag = dfs(i + 1, j, k + 1, board, word) || dfs(i - 1, j, k + 1, board, word) ||
                    dfs(i, j + 1, k + 1, board, word) || dfs(i, j - 1, k + 1, board, word);
        board[i][j] = word[k];
        return flag;
    }

public:
    bool exist(vector<vector<char>> &board, string word) {
        row = board.size();
        col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (dfs(i, j, 0, board, word)) return true;
            }
        }
        return false;
    }
};

int main() {
    return 0;
}
