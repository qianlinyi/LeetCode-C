// 分类：并查集
// Created by 旺崽 on 2021/11/9.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    unordered_map<int, int> father;
public:
    int findFather(int x) {
        return x == father[x] ? x : (father[x] = findFather(father[x]));
    }

    void Union(int x, int y) {
        int m = findFather(x), n = findFather(y);
        if (m != n) {
            father[m] = n;
        }
    }

    int longestConsecutive(vector<int> &nums) {
        unordered_map<int, int> vis, cnt;
        int ans = 0;
        for (auto i: nums) vis[i] = 1, father[i] = i;
        for (auto i: nums) {
            if (vis[i - 1]) Union(i - 1, i);
            if (vis[i + 1]) Union(i, i + 1);
        }
        for (auto i: nums) {
            if (vis[i]) cnt[findFather(i)]++, vis[i] = 0;
        }
        for (auto i: cnt) ans = max(ans, i.second);
        return ans;
    }
};

int main() {
    return 0;
}
