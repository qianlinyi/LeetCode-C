//
// Created by 旺崽 on 2021/11/27.
//

#include "bits/stdc++.h"

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        auto cmp = [](const ListNode *a, const ListNode *b) { return a->val > b->val; };
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> q(cmp);
        if (l1 != nullptr) q.push(l1);
        if (l2 != nullptr) q.push(l2);
        ListNode *ans = new ListNode();
        ListNode *dummyHead = ans;
        while (!q.empty()) {
            ans->next = q.top();
            q.pop();
            ans = ans->next;
            if (ans->next != nullptr) q.push(ans->next);
        }
        return dummyHead->next;
    }
};

int main() {
    return 0;
}