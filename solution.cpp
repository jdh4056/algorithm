#include "friend_recommendation.h"
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

const int MAXN = 10001;  // 최대 사용자 수
vector<unordered_set<int>> friends;  // 친구 관계를 저장할 인접 리스트

void init(int N) {
    friends.clear();
    friends.resize(N + 1);  // 1-based indexing
}

void add(int id, int F, int ids[MAXF]) {
    for (int i = 0; i < F; ++i) {
        int friend_id = ids[i];
        friends[id].insert(friend_id);
        friends[friend_id].insert(id);
    }
}

void del(int id1, int id2) {
    friends[id1].erase(id2);
    friends[id2].erase(id1);
}

int recommend(int id, int list[MAXL]) {
    unordered_map<int, int> mutual_friends_count;

    for (int friend_id : friends[id]) {
        for (int mutual_friend : friends[friend_id]) {
            if (mutual_friend != id && friends[id].find(mutual_friend) == friends[id].end()) {
                mutual_friends_count[mutual_friend]++;
            }
        }
    }

    vector<pair<int, int>> candidates(mutual_friends_count.begin(), mutual_friends_count.end());

    sort(candidates.begin(), candidates.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });

    int count = min(5, (int)candidates.size());
    for (int i = 0; i < count; ++i) {
        list[i] = candidates[i].first;
    }

    return count;
}
