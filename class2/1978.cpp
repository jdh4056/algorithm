#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        bool isPrime = true;

        if (arr[i] <= 1) {
            isPrime = false;
        } else if (arr[i] == 2 || arr[i] == 3) {
            isPrime = true;
        } else if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
            isPrime = false;
        } else {
            for (int j = 5; j * j <= arr[i]; j += 6) {
                if (arr[i] % j == 0 || arr[i] % (j + 2) == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            count++;
        }
    }

    cout << count;
}