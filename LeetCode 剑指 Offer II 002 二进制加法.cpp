//
// Created by 崽崽 on 2022/11/29.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int len = max(a.length(), b.length()), carry = 0;
        string ans = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < len; i++) {
            carry += i < a.size() ? (a.at(i) == '1') : 0;
            carry += i < b.size() ? (b.at(i) == '1') : 0;
            ans.push_back((carry % 2) ? '1' : '0');
            carry /= 2;
        }
        if (carry) {
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
}