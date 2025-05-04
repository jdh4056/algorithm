#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int a1,a2,a3;
        cin>> a1 >> a2 >> a3;
        if (a1 == 0 && a2 == 0 && a3 == 0) break;
        if (abs(a1-a2) == abs(a2-a3)) {
            cout << "AP " << a3 + (a3-a2) << '\n';
        } else {
            int g = a2/a1;
            cout << "GP " << a3 * g << '\n';
        }
    }
}