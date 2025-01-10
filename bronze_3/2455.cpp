#include <bits/stdc++.h>
using namespace std;
int main() {
    int mx = 0;
    int total = 0;
    for (int i = 0; i < 4; ++i) {
        int in, out;
        cin >> out >> in;
        int newPerson = in - out;
        total += newPerson;
        mx = max(mx, total);
    }

    cout << mx;
}