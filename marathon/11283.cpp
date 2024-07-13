#include <bits/stdc++.h>
using namespace std;

int main() {
    string korean;
    cin >> korean;
    int n;
    n = ((korean[0] & 255) - 234) * 4096 + ((korean[1] & 255) - 176) * 64 + (korean[2] & 255) - 127;
    cout << n;
}