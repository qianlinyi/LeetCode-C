//
// Created by 旺崽 on 2021/11/18.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string ans = "";
        for (auto i: s) {
            if (i == ' ') ans += "%20";
            else ans += i;
        }
        return ans;
    }
};

int main() {
    return 0;
}
