#include <bits/stdc++.h>
using namespace std;

int n;
long long a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    int cnt = 1;
    long long mxval = a[0];
    int mxcnt = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            if (cnt > mxcnt) {
                mxcnt = cnt;
                mxval = a[i - 1];
            } else if (cnt == mxcnt) {
                mxval = min(mxval, a[i - 1]);
            }
            cnt = 1;
        }
    }


    if (cnt > mxcnt) {
        mxval = a[n - 1];
    } else if (cnt == mxcnt) {
        mxval = min(mxval, a[n - 1]);
    }

    cout << mxval << '\n';
    return 0;
}
