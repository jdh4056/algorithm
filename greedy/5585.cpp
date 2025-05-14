#include<bits/stdc++.h>
using namespace std;

int main() {
    int price;
    cin >> price;

    int res = 1000 - price;
    int ans = 0;
    int arr[] = {500, 100, 50, 10, 5, 1};

    for (int i = 0 ; i < 6; i++) {
        ans += (res/arr[i]);
        res %= arr[i];
    }

    cout << ans;

}