#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> meetings;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int start, finish;
        cin >> start >> finish;
        meetings.push_back({finish, start});
    }

    sort(meetings.begin(), meetings.end());

    int count = 0;
    int lastEndTime = 0;
    for (int i = 0; i < n; ++i) {
        if (meetings[i].second >= lastEndTime) {
            lastEndTime = meetings[i].first;
            count++;
        }
    }

    cout << count;
}