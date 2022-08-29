// 分类：模拟
// Created by 旺崽 on 2021/10/26.
//
#include "bits/stdc++.h"

using namespace std;

class LRUCache {
private:
    list<int> l;
    unordered_map<int, pair<int, list<int>::iterator>> mp;
    int _capacity;
public:
    void insert(int key, int value) {
        l.push_back(key);
        mp[key] = make_pair(value, --l.end());
    }

    LRUCache(int capacity) {
        _capacity = capacity;
    }

    int get(int key) {
        auto it = mp.find(key);
        if (it != mp.end()) {
            l.erase(mp[key].second);
            l.push_back(key);
            mp[key].second = --l.end();
            return mp[key].first;
        }
        return -1;
    }

    void put(int key, int value) {
        if (get(key) != -1) {
            mp[key].first = value;
            return;
        }
        if (l.size() == _capacity) {
            mp.erase(mp.find(l.front()));
            l.pop_front();
        }
        insert(key, value);
    }
};

int main() {
    return 0;
}