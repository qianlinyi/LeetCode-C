//
// Created by 旺崽 on 2021/11/26.
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
    ListNode *deleteNode(ListNode *head, int val) {
        ListNode *a = new ListNode();
        ListNode *dummyHead = a;
        a->next = head;
        while (a->next != nullptr) {
            if (a->next->val == val) {
                if (a->next->next != nullptr) {
                    a->next = a->next->next;
                    break;
                } else {
                    a->next = nullptr;
                    break;
                }
            }
            a = a->next;
        }
        return dummyHead->next;
    }
};

int main() {
    return 0;
}