#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int M = N;
    while (N > 0) {
        M += N % 10;
        N /= 10;
    }


}