//
// Created by 旺崽 on 2021/11/20.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> cnt(26, 0);
        for (auto i: s) cnt[i - 'a']++;
        for (auto i: s) if (cnt[i - 'a'] == 1) return i;
        return ' ';
    }
};

int main() {
    return 0;
}
