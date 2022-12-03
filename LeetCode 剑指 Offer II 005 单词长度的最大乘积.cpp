//
// Created by 崽崽 on 2022/12/3.
//
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

class Solution {
public:
    int maxProduct(vector<string> &words) {
        vector<vector<int>> cnt(1005, vector<int>(26, 0));
        int n = words.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            for (auto c: words[i]) {
                cnt[i][c - '0']++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                bool flag = true;
                for (int k = 0; k < 26; k++) {
                    if (cnt[i][k] && cnt[j][k]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    ans = max(ans, int(words[i].length() * words[j].length()));
                }
            }
        }
        return ans;
    }
};