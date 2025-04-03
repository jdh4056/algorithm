#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int i = 1;
    while (n > 0) {
        if (i > n) i = 1;

        n -= i;
        cnt++;
        i++;
        
    }
    cout << cnt;
}
