#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    list<char> L;
    for (char i : str) {
        L.push_back(i);
    }
    auto t = L.end();
    int n;
    cin >> n;
    while (n--) {
        char command;
        cin >> command;
        if (command == 'P') {
            char a;
            cin >> a;
            L.insert(t, a);
        } else if (command == 'L') {
            if (t != L.begin()) t--;
        } else if (command == 'D') {
            if (t != L.end()) t++;
        } else if (command == 'B') {
            if (t != L.begin()) {
                t--;
                t = L.erase(t);
            }
        }
    }

    for(auto i : L) cout << i;
}