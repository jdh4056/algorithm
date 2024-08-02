#include <bits/stdc++.h>
using namespace std;
int def(int num) {
    int cnt = 0;

    if (num < 100) {
        return num;
    } else {
        cnt = 99;

        for (int i = 100; i <= num; ++i) {
            int hundred = i / 100;
            int ten = (i/10) % 10;
            int one = i % 10;

            if (hundred - ten == ten - one) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int N;
    cin >> N;

    int result = def(N);

    cout << result;
}