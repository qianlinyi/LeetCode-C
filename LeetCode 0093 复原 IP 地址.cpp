// 分类：DFS
// Created by 旺崽 on 2021/11/5.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<string> ans;
public:
    void dfs(int cnt, int index, string &s, string str) {
        if (cnt == 4 || index == s.size()) {
            if (cnt == 4 && index == s.size()) ans.push_back(str.substr(0, str.size() - 1));
            return;
        }
        for (int i = 1; i <= 3; i++) {
            if (index + i > s.size()) return;//越界
            if (s[index] == '0' && i != 1) return;//前导零
            if (i == 3 && s.substr(index, i) > "255") return;//超出范围
            str += s.substr(index, i);
            str.push_back('.');
            dfs(cnt + 1, index + i, s, str);
            str = str.substr(0, str.size() - i - 1);
        }
    }

    vector<string> restoreIpAddresses(string s) {
        dfs(0, 0, s, "");
        return ans;
    }
};



int main() {
    Solution a = Solution();
    string s = "25525511135";
    //cout<<"fuck"<<endl;
    for (auto i: a.restoreIpAddresses(s)) {
        cout << i << endl;
    }
    return 0;
}