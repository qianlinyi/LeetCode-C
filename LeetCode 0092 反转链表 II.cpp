//
// Created by 旺崽 on 2021/11/3.
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
    /*ListNode *reverseList(ListNode *head) {
        ListNode *ans = new ListNode();
        while (head) {
            ListNode *a = new ListNode();
            ans->val = head->val;
            a->next = ans;
            ans = a;
            head = head->next;
        }
        return ans->next;
    }

    ListNode *connectList(ListNode *a, ListNode *b) {
        if (b == nullptr) return a;
        if (a == nullptr) {
            a = b;
            return a;
        }
        ListNode *beg = a;
        while (a->next != nullptr) a = a->next;
        a->next = b;
        a = beg;
        return a;
    }

    ListNode *reverseBetween(ListNode *head, int left, int right) {
        if (left == right) return head;
        int length = 0, len = right - left;
        ListNode *a = head;
        while (a) a = a->next, length++;
        ListNode *leftList = new ListNode(), *middleList = new ListNode(), *rightList = new ListNode();
        ListNode *beg1 = new ListNode(), *beg2 = new ListNode();
        if (left >= 2) {
            left -= 2;
            leftList = head;
            beg1 = leftList;
            while (left--) leftList = leftList->next;
            middleList = leftList->next;
            leftList->next = nullptr;//封尾
            leftList = beg1;
        } else leftList = nullptr, middleList = head;
        beg2 = middleList;
        for (int i = 0; i < len; i++) middleList = middleList->next;
        rightList = middleList->next;
        middleList->next = nullptr;//封尾
        middleList = beg2;
        middleList = reverseList(middleList);
        ListNode *ans = new ListNode();
        ans = connectList(leftList, middleList);
        ans = connectList(ans, rightList);
        return ans;
    }*/
    ListNode *reverseBetween(ListNode *head, int left, int right) {
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode *pre = dummyNode;
        for (int i = 0; i < left - 1; i++) pre = pre->next;
        ListNode *cur = pre->next;
        ListNode *next;
        for (int i = 0; i < right - left; i++) {
            next = cur->next;
            cur->next = next->next;
            next->next = pre->next;
            pre->next = next;
        }
        return dummyNode->next;
    }
};


int main() {
    return 0;
}
