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
        if (l1 == NULL && l2 == NULL) return NULL;
        ListNode *ans = new ListNode();
        ans->val = min(l1 ? l1->val : 101, l2 ? l2->val : 101);
        if (l1 == NULL) ans->next = merge(l1, l2->next);
        else if (l2 == NULL) ans->next = merge(l1->next, l2);
        else {
            if (l1->val > l2->val) ans->next = merge(l1, l2->next);
            else ans->next = merge(l1->next, l2);
        }
        return ans;
    }

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        return merge(l1, l2);
    }
};


int main() {
    return 0;
}

