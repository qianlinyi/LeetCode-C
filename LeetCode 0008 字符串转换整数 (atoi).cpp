// 模拟
// Created by 旺崽 on 2021/11/15.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        //丢空格
        int pos = 0;
        while (s[pos] == ' ') pos++;
        s = s.substr(pos, s.size() - pos);
        //定号
        int sgn = 1;
        if (s.front() == '-') sgn *= -1;
        //截数
        int beg = (isdigit(s.front()) ? 0 : 1);
        pos = beg;
        //单个符号
        if (pos > s.size()) return 0;
        //非正负号
        if (!isdigit(s.front()) && !(s.front() == '+' || s.front() == '-')) return 0;
        while (isdigit(s[pos])) pos++;
        s = s.substr(beg, pos - beg);
        //计算
        int ans;
        long long temp = 0;
        for (auto i: s) {
            temp = temp * 10 + i - '0';
            if (sgn == -1) {
                if (temp > (1LL << 31)) return INT32_MIN;
            } else {
                if (temp > (1LL << 31) - 1) return INT32_MAX;
            }
        }
        ans = sgn * temp;
        return ans;
    }
};

int main() {
    return 0;
}
