// 分类：DFS，思维
// Created by 旺崽 on 2021/11/16.
//
#include "bits/stdc++.h"

using namespace std;
// DFS
//class Solution {
//private:
//    int n;
//    vector<int> vis;
//    vector<string> ans;
//    map<string, int> mp;
//public:
//    void dfs(int id, vector<int> &a, string &s) {
//        if (id == n) {
//            string str = "";
//            for (auto i: a) str.push_back(s[i]);
//            if (!mp.count(str)) mp[str] = 1, ans.push_back(str);
//            return;
//        }
//        for (int i = 0; i < n; i++) {
//            if (!vis[i]) {
//                vis[i] = 1;
//                a.push_back(i);
//                dfs(id + 1, a, s);
//                vis[i] = 0;
//                a.pop_back();
//            }
//        }
//    }
//
//    vector<string> permutation(string s) {
//        sort(s.begin(), s.end());
//        n = s.size();
//        vis.resize(n, 0);
//        vector<int> a;
//        dfs(0, a, s);
//        return ans;
//    }
//};

// 下一个排列
class Solution {
private:
    vector<string> ans;
    int n;
public:
    bool nextPermutation(string &s) {
        int i = n - 2;
        while (i >= 0 && s[i] >= s[i + 1]) i--;
        if(i<0) return false;
        if (i >= 0) {
            int j = n - 1;
            while (j >= 0 && s[j] <= s[i]) j--;
            swap(s[i], s[j]);
        }
        reverse(s.begin() + i + 1, s.end());
        return true;
    }

    vector<string> permutation(string s) {
        sort(s.begin(),s.end());
        n = s.size();
        do{
            ans.push_back(s);
        } while (nextPermutation(s));
        return ans;
    }
};

int main() {
    return 0;
}
