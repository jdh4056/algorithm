#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        string a;
        cin >> a;
        if (a == "0") break;

        int sum = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == '1') sum += 2;
            else if (a[i] == '0') sum += 4;
            else sum += 3;
        }

        cout << sum + (a.size() - 1) + 2 << '\n';
    }
}