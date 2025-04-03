#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N,M;
    cin >> N >> M;
    unordered_set<string> S;
    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        S.insert(str);
    }

    int count = 0;
    for (int i = 0; i < M; ++i) {
        string str;
        cin >> str;
        if (S.find(str) != S.end()) {
            count++;
        }
    }

    cout << count;
}