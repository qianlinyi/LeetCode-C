//
// Created by 旺崽 on 2021/11/27.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA, *b = headB;
        while (a != b) {
            a = (a == nullptr ? headB : a->next);
            b = (b == nullptr ? headA : b->next);
        }
        return a;
    }
};

int main() {
    return 0;
}
