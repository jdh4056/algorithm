#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    cin >> L;

    int count = 0;
    for (int i = 0; i < L; i += 5) {
        count++;
    }

    cout << count;
}