//
// Created by 旺崽 on 2021/12/13.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        return n <= 3? n - 1 : pow(3, n / 3) * 4 / (4 - n % 3);
    }
};

int main() {
    return 0;
}
