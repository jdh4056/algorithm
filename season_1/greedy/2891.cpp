#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, R;
    vector<int> arr(12, 1);

    cin >> N >> S >> R;

    int tmp;
    while (S--) {
        cin >> tmp;
        arr[tmp]--;
    }

    while (R--) {
        cin >> tmp;
        arr[tmp]++;

        if (arr[tmp] == 2 && arr[tmp - 1] == 0) {
            arr[tmp - 1]++;
        } else if (arr[tmp] == 2 && arr[tmp + 1] == 0) {
            arr[tmp + 1]++;
        }
    }

    int result = 0;
    for (int i = 1; i <= N; i++)
        if (arr[i] == 0) result++;

    cout << result;
}