#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n--) {
        int a;
        cin >> a;
        if ( a == -1) {
            sum -= 1;
        } else if (a == 1) {
            sum += 1;
        }
    }
    if (sum > 0) {
        cout << "Right";
    } else if (sum < 0) {
        cout << "Left";
    }else {
        cout << "Stay";
    }
}