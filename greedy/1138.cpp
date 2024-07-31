#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> order(N);
    vector<int> line(N);

    for (int i = 0; i < N; ++i) {
        cin >> order[i];
    }

    for (int i = 0; i < N; ++i) {
        int left = order[i];
        for (int j = 0; i < N; ++j) {
            if (left == 0 && line[j] == 0) {
                line[j] = i + 1;
                break;
            } else if (line[j] == 0) {
                left--;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << line[i] << " ";
    }
}