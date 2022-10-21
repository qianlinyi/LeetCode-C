//
// Created by 旺崽 on 2021/11/17.
//
// Definition for a Node.
#include "bits/stdc++.h"

using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

/*回溯+哈希表
class Solution {
private:
    unordered_map<Node *, Node *> cacheNode;
public:
    Node *copyRandomList(Node *head) {
        if (head == nullptr) return nullptr;
        if (!cacheNode[head]) {
            Node *headNew = new Node(head->val);
            cacheNode[head] = headNew;
            headNew->next= copyRandomList(head->next);
            headNew->random= copyRandomList(head->random);
        }
        return cacheNode[head];
    }
};*/

//迭代+链表拆分
class Solution {
public:
    Node *copyRandomList(Node *head) {
        if (head == nullptr) return nullptr;
        //拷贝
        for (Node *node = head; node != nullptr; node = node->next->next) {
            Node *nodeNew = new Node(node->val);
            nodeNew->next = node->next;
            node->next = nodeNew;
        }
        //添加随机结点
        for (Node *node = head; node != nullptr; node = node->next->next) {
            Node *nodeNew = node->next;
            nodeNew->random = (node->random != nullptr ? node->random->next : nullptr);
        }
        //提取链表
        Node *headNew = head->next;
        for (Node *node = head; node != nullptr; node = node->next) {
            Node *nodeNew = node->next;
            node->next = node->next->next;
            nodeNew->next = (nodeNew->next != nullptr ? nodeNew->next->next : nullptr);
        }
        return headNew;
    }
};

int main() {
    return 0;
}