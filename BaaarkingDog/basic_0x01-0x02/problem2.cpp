#include <bits/stdc++.h>
using namespace std;
int func2(const int arr[], int N) {
    int a;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (arr[i] + arr[j] == 100) {
                return 1;
            }
        }
    }
    return 0;

}
int main() {
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    cout << func2(arr, a);

}