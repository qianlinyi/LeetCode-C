//
// Created by 旺崽 on 2021/11/16.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> ans(min(int(s.size()), numRows));
        int pos = 0, r = 0, c = 0;
        while (pos < s.size()) {
            if (r != numRows) ans[r].push_back(s[pos++]);
            if (c % (numRows - 1) == 0 && r < numRows) r++;
            else {
                if (r == numRows) r--;
                r--, c++;
            }
        }
        string str = "";
        for (auto i: ans) str += i;
        return str;
    }
};


int main() {
    return 0;
}

