// 分类：排序
// Created by 旺崽 on 2021/10/27.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
            if (a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });
        vector<vector<int>> ans;
        int l = intervals.front()[0], r = intervals.front()[1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= r) {
                r = max(r, intervals[i][1]);
            } else {
                vector<int> a;
                a.push_back(l), a.push_back(r);
                ans.push_back(a);
                l = intervals[i][0], r = intervals[i][1];
            }
        }
        vector<int> a;
        a.push_back(l), a.push_back(r);
        ans.push_back(a);
        return ans;
    }
};

int main() {
    return 0;
}