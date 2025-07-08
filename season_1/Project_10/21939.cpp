#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> db;
map<int, int> dict;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int p, l;
        cin >> p >> l;
        db.insert({l,p});
        dict[p] = l;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;

        if (s == "add") {
            int p, l;
            cin >> p >> l;
            db.insert({l,p});
            dict[p] = l;
        } else if (s == "recommand") {
            int x;
            cin >> x;
            if (x == -1) {
                cout << (*db.begin()).second << '\n';
            } else {
                cout << (*prev(db.end())).second << '\n';
            }
        }else  if (s == "sovled") {
            int p;
            cin >> p;
            db.erase({dict[p], p});
            dict.erase(p);
        }
    }
}