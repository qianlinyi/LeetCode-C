// 标签：DFS
// Created by 旺崽 on 2021/11/2.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<vector<int>> vis;
    int r, c;
public:
    void dfs(int x, int y, vector<vector<char>> &grid) {
        vis[x][y] = 1;
        if (x + 1 < r && grid[x + 1][y] == '1' && !vis[x + 1][y]) dfs(x + 1, y, grid);
        if (x - 1 >= 0 && grid[x - 1][y] == '1' && !vis[x - 1][y]) dfs(x - 1, y, grid);
        if (y + 1 < c && grid[x][y + 1] == '1' && !vis[x][y + 1]) dfs(x, y + 1, grid);
        if (y - 1 >= 0 && grid[x][y - 1] == '1' && !vis[x][y - 1]) dfs(x, y - 1, grid);
        return;
    }

    int numIslands(vector<vector<char>> &grid) {
        r = grid.size(), c = grid[0].size();
        int ans = 0;
        vis.resize(r, vector<int>(c, 0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}
