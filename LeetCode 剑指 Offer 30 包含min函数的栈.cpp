//
// Created by 旺崽 on 2021/11/16.
//
#include "bits/stdc++.h"

using namespace std;

//SB写法
//class MinStack {
//private:
//    priority_queue<int, vector<int>, greater<>> q;
//    stack<int> st;
//    map<int, int> cnt;
//public:
//    /** initialize your data structure here. */
//    MinStack() {
//        while (!q.empty()) q.pop();
//        while (!st.empty()) st.pop();
//    }
//
//    void push(int x) {
//        st.push(x);
//        q.push(x);
//        cnt[x]++;
//    }
//
//    void pop() {
//        cnt[st.top()]--;
//        st.pop();
//    }
//
//    int top() {
//        return st.top();
//    }
//
//    int min() {
//        while (cnt[q.top()]) q.pop();
//        return q.top();
//    }
//};

// 双栈
class MinStack {
private:
    stack<int> st1, st2;
public:
    /** initialize your data structure here. */
    MinStack() {
        while (!st1.empty()) st1.pop();
        while (!st2.empty()) st2.pop();
    }

    void push(int x) {
        st1.push(x);
        if (st2.empty()) st2.push(x);
        else {
            if (x <= st2.top()) st2.push(x);
        }
    }

    void pop() {
        if (st2.top() == st1.top()) st2.pop();
        st1.pop();
    }

    int top() {
        return st1.top();
    }

    int min() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
int main() {
    return 0;
}
