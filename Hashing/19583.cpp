#include <bits/stdc++.h>
using namespace std;

int time2Int(string time) {
    return stoi(time.substr(0,2)) * 100 + stoi(time.substr(3,2));
}
string s,e,q;

#include <bits/stdc++.h>
using namespace std;

int time2Int(string time) {
    return stoi(time.substr(0,2)) * 100 + stoi(time.substr(3,2));
}
string s,e,q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> e >> q;
    int start = time2Int(s);
    int end = time2Int(e);
    int close = time2Int(q);

    set<string> enter, exit;
    string log, name;

    while (cin >> log >> name) {
        int cur = time2Int(log);

        if (cur <= start) {
            enter.insert(name);
        }

        if (cur >= end && cur <= close) {
            exit.insert(name);
        }
    }

    int result = 0;
    for(auto n :enter) {
        if (exit.count(n)) {
            result++;
        }
    }

    cout << result;
}int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> e >> q;
    int start = time2Int(s);
    int end = time2Int(e);
    int close = time2Int(q);

    set<string> enter, exit;
    string log, name;

    while (cin >> log >> name) {
        int cur = time2Int(log);

        if (cur <= start) {
            enter.insert(name);
        }

        if (cur >= end && cur <= close) {
            exit.insert(name);
        }
    }

    int result = 0;
    for(auto n :enter) {
        if (exit.count(n)) {
            result++;
        }
    }

    cout << result;
}