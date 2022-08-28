//
// Created by 旺崽 on 2021/10/31.
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
    ListNode *middleNode(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
            if (fast->next != nullptr) fast = fast->next;
        }
        return slow;
    }

    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr;
        ListNode *cur = head;
        while (cur) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    void reorderList(ListNode *head) {
        ListNode *start = head;
        head = middleNode(head);
        ListNode *tail = head->next;
        head->next = nullptr;//封尾
        head = start;
        ListNode *ans = head;
        tail = reverseList(tail);
        while (tail != nullptr) {
            ListNode *c = head->next;
            ListNode *d = tail->next;
            head->next = tail;
            tail->next = c;
            head = c;
            tail = d;
        }
        head = ans;
    }
};

int main() {
    return 0;
}
