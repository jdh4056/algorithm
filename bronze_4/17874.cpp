#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, v;
    cin >> n >> h >> v;
    int mxh = max(h, n-h);
    int mxv = max(v, n-v);
    cout << mxh*mxv*4;
}