#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B, V;
    cin >> A >> B >> V;

    int count = 1;

    int AtoV = V - A;
    int ABBetween = A - B;

    count += AtoV / ABBetween;

    if (AtoV % ABBetween != 0) {
        count++;
    }
    if (A >= V) {
        cout << " ";
    } else {#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B, V;
    cin >> A >> B >> V;

    int count = 1;

    int AtoV = V - A;
    int ABBetween = A - B;

    count += AtoV / ABBetween;

    if (AtoV % ABBetween != 0) {
        count++;
    }
    if (A >= V) {
        cout << " ";
    } else {
        cout << count;
    }
}



        cout << count;
    }
}


