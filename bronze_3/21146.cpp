#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int now = 0;
    for (int i = 0; i < k; i++) {
        int a; cin >> a;
        now += a;
    }

    int leftPeople = n - k;
    int mx = now + (leftPeople * 3);
    int mn = now + (leftPeople * (-3));

    cout << (double)mn / n << " " << (double)mx / n;
}