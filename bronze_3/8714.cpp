#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int arr[n];
    int zero=0;
    int one = 0;
    for (int i =0; i <n;i++) {
        cin >> arr[i];
        if (arr[i] == 0) zero++;
        else one++;
    }

    int cnt = 0;
    if (zero < one) {
        for (int i =0; i <n;i++) {
            if (arr[i] == 0) {
                cnt++;
            }
        }
    }
    else if (zero > one) {
        for (int i =0; i <n;i++) {
            if (arr[i] == 1) {
                cnt++;
            }
        }
    } else cnt = 0;

    cout << cnt;
}