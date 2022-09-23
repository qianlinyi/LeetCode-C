//
// Created by 旺崽 on 2021/11/16.
//
#include "bits/stdc++.h"

using namespace std;

class CQueue {
private:
    stack<int> st1, st2;

public:
    CQueue() {}

    void appendTail(int value) {
        st1.push(value);
    }

    int deleteHead() {
        if (st2.empty()) {
            if (st1.empty()) return -1;
            while (!st1.empty()) st2.push(st1.top()), st1.pop();
        }
        int value = st2.top();
        st2.pop();
        return value;
    }
};

int main() {
    return 0;
}
