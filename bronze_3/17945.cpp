#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a>> b;

    int temp = a*a - b;
    int res1 = -a + sqrt(temp);
    int res2 = -a - sqrt(temp);

    if (res1 == res2) cout << res1;
    else if (res1 > res2) cout << res2 << " " << res1;
    else cout << res1 << " " << res2;
}