//
// Created by 旺崽 on 2021/11/15.
//

#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        auto cmp = [](ListNode *a, ListNode *b) {
            return a->val > b->val;
        };
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> q(cmp);
        for (auto i: lists) if (i != nullptr) q.push(i);
        ListNode *head = new ListNode();
        ListNode *dummyHead = head;
        while (!q.empty()) {
            head->next = q.top();
            q.pop();
            head = head->next;
            if (head->next != nullptr) q.push(head->next);
        }
        return dummyHead->next;
    }
};

int main() {
    return 0;
}