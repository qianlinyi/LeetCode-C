//
// Created by 旺崽 on 2021/11/23.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int numWays(int n) {
        int f[105];
        f[0] = 1, f[1] = 1;
        for (int i = 2; i <= n; i++) f[i] = (f[i - 1] + f[i - 2]) % 1000000007;
        return f[n];
    }
};

int main() {
    return 0;
}