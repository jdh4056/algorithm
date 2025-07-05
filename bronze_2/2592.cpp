#include<iostream>

using namespace std;

int main() {
    int arr[10];
    int idx[1001] = {};
    for (int i = 0;i<10;i++) cin >> arr[i];

    int sum = 0;
    for (int i = 0; i<10;i++) {
        sum += arr[i];
        idx[arr[i]]++;
    }
    int avg = sum / 10;

    int mx = 0;
    int ans = 0;
    for (int i =1; i < 1001;i++) {
        if (mx < idx[i]) {
            mx = idx[i];
            ans = i;
        }
    }

    cout << avg << "\n" << ans;

}