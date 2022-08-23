//
// Created by 旺崽 on 2021/11/7.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
//    贪心
//    int maxProfit(vector<int> &prices) {
//        int pos = 1, flag = 0, ans = 0;
//        while (pos < prices.size()) {
//            if (!flag) {
//                while (pos < prices.size() && prices[pos] <= prices[pos - 1]) pos++;
//                if (pos < prices.size()) ans -= prices[pos - 1];
//            } else {
//                while (pos + 1 < prices.size() && prices[pos] <= prices[pos + 1]) pos++;
//                ans += prices[pos];
//                pos++;
//            }
//            flag ^= 1;
//        }
//        return ans;
//    }

    int maxProfit(vector<int> &prices) {
        int ans = 0;
        for (int i = 1; i < prices.size(); i++) if (prices[i] > prices[i - 1]) ans += prices[i] - prices[i - 1];
        return ans;
    }
};

int main() {
    return 0;
}
