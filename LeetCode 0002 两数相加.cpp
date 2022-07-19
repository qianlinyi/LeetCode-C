
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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *addSum(ListNode *l1, ListNode *l2, int sum) {
        if (l1 == NULL && l2 == NULL && sum == 0) {
            return NULL;
        }
        ListNode *ans = new ListNode();
        ans->val = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + sum) % 10;
        sum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + sum >= 10);
        ans->next = addSum(l1 ? l1->next : NULL, l2 ? l2->next : NULL, sum);
        return ans;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        return addSum(l1, l2, 0);
    }
};


int main() {
    return 0;
}

