#include<bits/stdc++.h>
using namespace std;
const int MAX = 10001;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(MAX);

    for (int i = 0; i < n; i++) {
        int a; cin>> a;
        v[a]++;
    }

    for (int i = 0; i < MAX; i++) {
        while (v[i]--) cout << i << '\n';
    }
}