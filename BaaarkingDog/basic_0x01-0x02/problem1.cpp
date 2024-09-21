#include <bits/stdc++.h>
using namespace std;

int func1(int N) {
    int result = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    cout << func1(n);
}