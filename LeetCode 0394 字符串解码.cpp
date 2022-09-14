// 分类：DFS，递归
// Created by 旺崽 on 2021/11/14.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    // 栈
    /*string decodeString(string s) {
        vector<string> st;
        int p = 0;
        while (p < s.size()) {
            string num = "";
            while (isdigit(s[p])) num.push_back(s[p++]);
            if(!num.empty()) st.push_back(num);
            if (isalpha(s[p]) || s[p] == '[') st.push_back(string(1, s[p++]));
            else {
                string str = "";
                while (st.back() != "[") str = st.back() + str, st.pop_back();
                st.pop_back();
                int t = stoi(st.back());
                st.pop_back();
                string ans = "";
                while (t--) ans += str;
                st.push_back(ans);
                p++;
            }
        }
        string ans = "";
        for (auto i: st) ans += i;
        return ans;
    }*/
    // 递归
    string DFS(string s, int &id) {
        string ans = "", temp = "";
        int num = 0;
        while (id < s.size()) {
            if (isdigit(s[id])) {
                num = num * 10 + s[id] - '0';
            } else if (s[id] == '[') {
                temp = DFS(s, ++id);
                while (num) ans += temp, num--;
            } else if (s[id] == ']') break;
            else ans += s[id];
            id++;
        }
        return ans;
    }

    string decodeString(string s) {
        int id=0;
        return DFS(s, id);
    }
};

int main() {
    return 0;
}
