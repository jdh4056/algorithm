#include <bits/stdc++.h>
using namespace std;

int n;
int w[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    sort(w,w+n);
    int mxweight = 0;
    for (int i = 1; i <= n; ++i) {
        int weight = w[n-i] * i;
        mxweight = max(weight, mxweight);
    }

    cout << mxweight;
}