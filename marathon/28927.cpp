#include <bits/stdc++.h>
using namespace std;
int main() {
    int t1,e1,f1;
    int t2,e2,f2;

    cin >> t1 >> e1 >> f1;
    cin >> t2 >> e2 >> f2;

    t1 *= 3; t2 *= 3;
    e1 *= 20; e2 *= 20;
    f1 *= 120; f2 *= 120;

    int max = t1 + e1 + f1;
    int mel = t2 + e2 + f2;

    if (max > mel) {
        cout << "Max";
    } else if (max < mel) {
        cout << "Mel";
    } else {
        cout << "Draw";
    }

}
