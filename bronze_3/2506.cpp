#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int point[n];
    for (int i = 0; i < n; ++i) {
        cin >> point[i];
    }


    int total = 0;
    int consecutive = 0;
    for (int i = 0; i < n; ++i) {
        if (point[i] == 1) {
            consecutive++;
            total += consecutive;
        } else {
            consecutive = 0;
        }
    }

    cout << total;
}