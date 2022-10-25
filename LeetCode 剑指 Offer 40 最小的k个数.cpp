//
// Created by 旺崽 on 2021/12/2.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int> &arr, int k) {
        priority_queue<int> q;
        vector<int> ans;
        if (k == 0) return ans;
        for (auto &i: arr) {
            if (q.size() < k) q.push(i);
            else {
                if (i < q.top()) {
                    q.pop();
                    q.emplace(i);
                }
            }
        }
        while (!q.empty()) ans.emplace_back(q.top()), q.pop();
        return ans;
    }
};

int main() {
    return 0;
}