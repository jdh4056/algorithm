#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+4);

    cout << arr[0]*arr[2];

}