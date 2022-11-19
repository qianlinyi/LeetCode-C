//
// Created by 旺崽 on 2021/11/18.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string ans = "";
        for (int i = n; i < s.size(); i++) {
            ans += s[i];
        }
        for (int i = 0; i < n; i++) ans += s[i];
        return ans;
    }
};

int main() {
    return 0;
}
