#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++) {
        char c;
        cin >> ch[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if (c == ch[i]) {
            cnt++;
            continue;
        }
    }
    cout << cnt;
}