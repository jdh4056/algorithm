#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string name;
        string log;
        cin >> name >> log;
        if (log == "enter") {
            s.insert(name);
        } else if (log == "leave") {
            s.erase(name);
        }
    }

    vector<string> result(s.begin(), s.end());
    sort(result.begin(), result.end(), greater<string>());
    for (auto x : result) cout << x << '\n';
}
