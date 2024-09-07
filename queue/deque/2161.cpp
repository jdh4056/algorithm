#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    deque<int> card;
    int trash[N];

    for (int i = N; i > 0; --i) {
        card.push_front(i);
    }

    while(!card.empty()) {
        for (int i = 0; i < N; ++i) {
            int n = card.front();
            trash[i] = n;
            //cout << n << '\n';
            card.pop_front();
            //cout << n << '\n';

            int cnt;
            cnt = card.front();
            //cout << cnt << '\n';
            card.pop_front();
            card.push_back(cnt);
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << trash[i] << " ";
    }

}