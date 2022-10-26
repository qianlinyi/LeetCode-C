// 分类：堆
// Created by 旺崽 on 2021/12/2.
//

#include "bits/stdc++.h"

using namespace std;

class MedianFinder {
private:
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;
public:
    /** initialize your data structure here. */
    MedianFinder() {
        while (!mx.empty()) mx.pop();
        while (!mn.empty()) mn.pop();
    }

    void addNum(int num) {
        if (mx.size() == mn.size()) {
            mn.push(num);
            mx.push(mn.top());
            mn.pop();
        } else {
            mx.push(num);
            mn.push(mx.top());
            mx.pop();
        }
    }

    double findMedian() {
        return mx.size() == mn.size() ? (mn.top() + mx.top()) / 2.0 : mx.top();
    }
};

int main() {
    return 0;
}