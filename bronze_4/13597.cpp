#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int card[14];
    for (int i =1; i<=13; i++) {
        card[i] += 4;
    }

    cin >> a >> b;
    for (int i =1; i <=13; i++) {
        if (i == a || i == b) card[i]--;
    }

    int c = 0;
    if (a == b) c = a;
    else if (a != b) {
        if (a>b) c=a;
        else c=b;
    }

    cout << c;
}