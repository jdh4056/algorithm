#include <bits/stdc++.h>
using namespace std;

int instantNoodle(int A, int B, int X) {
    int W;
    W = A * (X - 1) + B;
    return W;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a,b,x;
        cin >> a >> b >> x;
        cout << instantNoodle(a, b, x) << endl;
    }
}