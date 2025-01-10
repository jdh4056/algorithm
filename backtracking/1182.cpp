#include <bits/stdc++.h>
using namespace std;

int n,s;
int num[20];
int cnt = 0;

void find_subsets(int idx, int sum) {
    if (idx == n) {
        if (sum == s) {
            cnt++;
        }
    } else {
        find_subsets(idx + 1, sum + num[idx]);
        find_subsets(idx + 1, sum);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    find_subsets(0,0);

    if (s == 0) cnt--;

    cout << cnt;
}