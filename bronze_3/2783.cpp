#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double sevenPerPrice, sevenPerGram;
    cin >> sevenPerPrice >> sevenPerGram;

    double seven = sevenPerPrice / sevenPerGram;
    int n;
    cin >> n;

    double mn = seven;;
    for (int i = 0; i < n; ++i) {
        double aPrice, aGram;
        cin >> aPrice >> aGram;
        double a = aPrice / aGram;
        mn = min(mn, a);
    }

    cout << fixed << setprecision(2) << mn * 1000;
}