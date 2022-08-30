//
// Created by 旺崽 on 2021/10/30.
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
    ListNode *merge(ListNode *l1, ListNode *l2) {
        if (l1 == nullptr && l2 == nullptr) return nullptr;
        ListNode *ans = new ListNode();
        ans->val = min(l1 ? l1->val : 100001, l2 ? l2->val : 100001);
        if (l1 == nullptr) ans->next = merge(l1, l2->next);
        else if (l2 == nullptr) ans->next = merge(l1->next, l2);
        else {
            if (l1->val > l2->val) ans->next = merge(l1, l2->next);
            else ans->next = merge(l1->next, l2);
        }
        return ans;
    }

    ListNode *sortList(ListNode *head) {
        if (head == nullptr) {
            return head;
        }
        int length = 0;
        ListNode *node = head;
        while (node != nullptr) {//计算链表长度
            length++;
            node = node->next;
        }
        ListNode *dummyHead = new ListNode(0, head);
        for (int subLength = 1; subLength < length; subLength <<= 1) {
            ListNode *pre = dummyHead, *cur = dummyHead->next;
            while (cur != nullptr) {
                ListNode *h1 = cur;
                for (int i = 1; i < subLength && cur->next != nullptr; i++) cur = cur->next;
                ListNode *h2 = cur->next;
                cur->next = nullptr;//h1封尾
                cur = h2;
                for (int i = 1; i < subLength && cur != nullptr && cur->next != nullptr; i++) cur = cur->next;
                ListNode *nxt = nullptr;
                if (cur != nullptr) {//h2封尾
                    nxt = cur->next;
                    cur->next = nullptr;
                }
                ListNode *merged = merge(h1, h2);
                pre->next = merged;
                while (pre->next != nullptr) pre = pre->next;
                cur = nxt;
            }
        }
        return dummyHead->next;
    }
};

int main() {
    return 0;
}

