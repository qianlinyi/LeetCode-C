// 分类：DFS
// Created by 旺崽 on 2021/11/21.
//

#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
};

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr;
        ListNode *cur = head;
        while (cur != nullptr) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    ListNode *addList(ListNode *l1, ListNode *l2, int sum) {
        if (l1 == nullptr && l2 == nullptr && sum == 0) return nullptr;
        ListNode *ans = new ListNode();
        ans->val = (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + sum;
        sum = (ans->val >= 10);
        ans->val = ans->val % 10;
        ans->next = addList(l1 == nullptr ? nullptr : l1->next, l2 == nullptr ? nullptr : l2->next, sum);
        return ans;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        l1 = reverseList(l1), l2 = reverseList(l2);
        return reverseList(addList(l1, l2, 0));
    }
};

int main() {
    return 0;
}