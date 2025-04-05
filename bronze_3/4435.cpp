#include<bits/stdc++.h>
using namespace std;

int main() {
    int g[] = {1, 2, 3, 3, 4, 10};
    int sh[] = {1,2,2,2,3,5,10};

    int t; cin >> t;
    int battle = 1;

    while (t--) {

        int gSum = 0, shSum = 0;
        for (int i = 0; i < 6; i++) {
            int a; cin >> a;
            gSum += g[i] * a;
        }

        for (int i = 0; i < 7; i++) {
            int a; cin >> a;
            shSum += sh[i] * a;
        }

        if (gSum > shSum) {
            cout << "Battle " << battle << ": Good triumphs over Evil\n";
        } else if (gSum < shSum) {
            cout << "Battle " << battle << ": Evil eradicates all trace of Good\n";
        } else {
            cout << "Battle " << battle << ": No victor on this battle field\n";
        }
        battle++;
    }
}