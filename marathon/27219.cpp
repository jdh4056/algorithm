#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n/5; ++i) {
        cout << "V";
    }
    for (int i = 1; i <= n%5; ++i) {
        cout << "I";
    }
}