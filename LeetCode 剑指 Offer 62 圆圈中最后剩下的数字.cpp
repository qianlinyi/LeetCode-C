//
// Created by 旺崽 on 2021/12/13.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int lastRemaining(int n, int m) {
        int f = 0;
        for (int i = 2; i != n + 1; ++i) {
            f = (m + f) % i;
        }
        return f;
    }
};

int main() {
    return 0;
}