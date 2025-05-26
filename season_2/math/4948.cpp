#include<bits/stdc++.h>
using namespace std;

int n;
vector<bool> state(246913, true);
int sieve(int n) {
    int cnt = 0;
    state[1] = false;
    for (int i = 2; i*i <= 2*n; i++) {
        if (!state[i]) continue;
        for (int j = i*i; j <= 2*n; j += i) {
            state[j] = false;
        }
    }
    for (int i = n+1; i <= 2*n; i++) {
        if (state[i]) cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> n;

        if (n == 0) break;
        else cout << sieve(n) << '\n';
    }
}