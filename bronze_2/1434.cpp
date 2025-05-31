#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int box[n];
    for (int i =0;i<n;i++) {
        cin >> box[i];
    }

    while (m--) {
        int book; cin >> book;

        int idx = 0;
        while (idx < n && box[idx] < book) idx++;

        if (idx == n) break;

        box[idx] -= book;
    }

    int res = 0;
    for (int i = 0;i<n;i++) {
        res += box[i];
    }
    cout << res;
}