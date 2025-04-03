#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        unordered_set<string> S;
        S.insert(a);

        if (S.find(b) != S.end()) {
            cout << "Possible" << '\n';
        } else {
            cout << "Impossible" << '\n';
        }
    }
}