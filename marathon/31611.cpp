#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int arr[6];
    for (int i = 0; i < 6; ++i) {
        arr[i] = i;
    }

    for (int i = 0; i < 6; ++i) {
        if ((x%7) == arr[2]) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
}