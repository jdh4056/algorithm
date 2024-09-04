#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int fiveKilo = N / 5;
    int rest = N % 5;
    int threeKilo = rest / 3;
    if (rest % 3 != 0) {
        threeKilo = N / 3;
        cout << threeKilo << endl;
        rest = N % 3;
        fiveKilo = rest / 5;
        if (rest % 5 != 0) {
            cout << -1;
            return 0;
        }
        cout << threeKilo + fiveKilo;
    } else {
        cout << fiveKilo + threeKilo;
    }
}