#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[102][10002];

void compress(int a[]) {
    vector<int> v(a, a+n);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < n; ++i) {
        a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
        compress(arr[i]);
    }

    int result = 0;
    for (int i = 0; i < m - 1; ++i) {
        for (int j = i + 1; j < m; ++j) {
            bool equal = true;

            for (int k = 0; k < n; ++k) {
                if (arr[i][k] != arr[j][k]) {
                    equal = false;
                    break;
                }
            }
            if (equal) result++;
        }
    }

    cout << result;
}