//
// Created by 旺崽 on 2021/12/1.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string minNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b) {
            string x = to_string(a);
            string y = to_string(b);
            return x + y < y + x;
        });
        string ans;
        for (auto &i: nums) ans += to_string(i);
        return ans;
    }
};

int main() {
    return 0;
}