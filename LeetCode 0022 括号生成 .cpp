//
// Created by 旺崽 on 2021/10/31.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<string> ans;
public:
    void dfs(string s, int num, int border) {
        if (s.size() == border * 2) {
            ans.push_back(s);
            return;
        }
        if (s.size() - num == num) {
            s.push_back('(');
            dfs(s, num + 1, border);
            s.pop_back();
        } else if (num == border) {
            s.push_back(')');
            dfs(s, num, border);
            s.pop_back();
        } else {
            s.push_back('(');
            dfs(s, num + 1, border);
            s.pop_back();
            s.push_back(')');
            dfs(s, num, border);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        dfs("", 0, n);
        return ans;
    }
};

int main() {
    return 0;
}
