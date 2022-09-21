//
// Created by 旺崽 on 2021/11/17.
//

#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

//SB写法
//class Solution {
//public:
//    vector<int> reversePrint(ListNode *head) {
//        vector<int> ans;
//        while (head != nullptr) ans.insert(ans.begin(), head->val), head = head->next;
//        return ans;
//    }
//};

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

    vector<int> reversePrint(ListNode *head) {
        vector<int> ans;
        head = reverseList(head);
        while (head != nullptr) ans.push_back(head->val), head = head->next;
        return ans;
    }
};

int main() {
    return 0;
}