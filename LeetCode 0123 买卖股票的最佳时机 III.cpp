// 分类：DP
// Created by 旺崽 on 2021/11/7.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int buy1 = -1e5, sell1 = 0, buy2 = -1e5, sell2 = 0;
        for (int i = 0; i < prices.size(); i++) {
            buy1 = max(buy1, -prices[i]);
            sell1 = max(sell1, prices[i] + buy1);
            buy2 = max(buy2, sell1 - prices[i]);
            sell2 = max(sell2, buy2 + prices[i]);
        }
        return sell2;
    }
};

int main() {
    return 0;
}
