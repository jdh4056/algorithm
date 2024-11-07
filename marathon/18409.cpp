#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> S;
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'a') {
            count++;
        } else if (S[i] == 'i') {
            count++;
        } else if (S[i] == 'u') {
            count++;
        } else if (S[i] == 'e') {
            count++;
        } else if (S[i] == 'o') {
            count++;
        }
    }

    cout << count;
}