#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    double scores[N];
    for (int i = 0; i < N; ++i) {
        int score;
        cin >> score;
        scores[i] = score;
    }

    double M = 0;
    double total = 0;
    for (int i = 0; i < N; ++i) {
        if (M < scores[i]) {
            M = scores[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        double d = scores[i] / M * 100;
        total += d;
    }

    double average = total / N;
    cout << average;
}