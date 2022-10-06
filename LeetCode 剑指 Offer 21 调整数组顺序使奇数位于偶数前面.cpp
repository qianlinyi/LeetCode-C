//
// Created by 旺崽 on 2021/11/28.
//
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int> &nums) {
        vector<int> v1, v2;
        for (auto i: nums) {
            if (i % 2) v1.emplace_back(i);
            else v2.emplace_back(i);
        }
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
};

int main() {
    return 0;
}
