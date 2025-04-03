#include <bits/stdc++.h>
using namespace std;

int main() {
    int nA, nB;
    cin >> nA >> nB;

    unordered_set<int> B(nB);
    int A[nA];
    vector<int> result;

    for (int i = 0; i < nA; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < nB; ++i) {
        int x;
        cin >> x;
        B.insert(x);
    }

    for (int i = 0; i < nA; ++i) {
        if (!B.count(A[i])) {
            result.push_back(A[i]);
        }
    }

    sort(result.begin(), result.end());
    if (result.empty()) {
        cout << "0\n";
    } else {
        cout << result.size() << '\n';
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
    }
}