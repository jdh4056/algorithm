#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, v;

    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        arr[i] = n;
    }

    cin >> v;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == v) {
            count++;
        }
    }
    cout << count;
}