#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int T_Shirts[6];
    int T, P;

    cin >> N;
    for (int i = 0; i < 6; ++i) {
        int n;
        cin >> n;
        T_Shirts[i] = n;
    }

    cin >> T >> P;

    int countT = 0;

    for (int i = 0; i < 6; ++i) {
        countT += (T_Shirts[i] + T - 1) / T;
    }

    int countP = N / P;
    int onePen = N % P;

    cout << countT << endl;
    cout << countP << " " << onePen;
}