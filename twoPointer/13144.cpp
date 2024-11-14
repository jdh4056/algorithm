#include <bits/stdc++.h>
using namespace std;

int n;
int a[100002];
bool check[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int st = 0, en = 0;
    int count = 0;

    while (en < n) {
        if (check[a[en]] == 1) {
            a[st++];
            check[a[st]] = false;
        } else {
            count += (en - st + 1);
            a[en++];
        }
    }
    cout << count;
}