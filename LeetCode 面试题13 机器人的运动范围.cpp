//
// Created by 旺崽 on 2021/11/29.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    int ans;
    int move[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
    vector<vector<int>> vis;

    bool calcuate(pair<int, int> a, int &k) {
        int sum = 0;
        while (a.first) sum += a.first % 10, a.first /= 10;
        while (a.second) sum += a.second % 10, a.second /= 10;
        return (sum <= k);
    }

public:
    void bfs(int x, int y, int &m, int &n, int &k) {
        queue<pair<int, int>> q;
        pair<int, int> a, b;
        q.emplace(x, y);
        vis[x][y] = 1;
        while (!q.empty()) {
            a = q.front();
            ans++;
            q.pop();
            for (int i = 0; i < 4; i++) {
                b.first = a.first + move[i][0];
                b.second = a.second + move[i][1];
                if (b.first >= 0 && b.first < m && b.second >= 0 && b.second < n && !vis[b.first][b.second] &&
                    calcuate(b, k)) {
                    vis[b.first][b.second] = 1;
                    q.push(b);
                }
            }
        }
    }

    int movingCount(int m, int n, int k) {
        ans = 0;
        vis.resize(m, vector<int>(n, 0));
        bfs(0, 0, m, n, k);
        return ans;
    }
};

int main() {
    return 0;
}