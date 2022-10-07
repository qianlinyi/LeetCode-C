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
    ListNode *getKthFromEnd(ListNode *head, int k) {
        ListNode *list = head;
        int length = 0;
        while (list != nullptr) list = list->next, length++;
        int cnt = length - k;
        while (cnt--) head = head->next;
        return head;
    }
};

int main() {
    return 0;
}