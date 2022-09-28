//
// Created by 旺崽 on 2021/11/20.
//

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int minArray(vector<int> &numbers) {
        int l = 0, r = numbers.size() - 1;
        while (l <= r) {
            int mid = l + r >> 1;
            if (numbers[mid] < numbers[r]) r = mid;
            else if (numbers[mid] > numbers[r]) l = mid + 1;
            else r--;
        }
        return numbers[l];
    }
};

int main() {
    return 0;
}
