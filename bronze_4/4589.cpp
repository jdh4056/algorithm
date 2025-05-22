#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    cout << "Gnomes:\n";
    while (n--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i < 2; i++) {
            if ((arr[i] > arr[i-1] && arr[i] > arr[i+1])
                || arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
                cout << "Unordered\n";
            } else cout << "Ordered\n";
        }
    }
}