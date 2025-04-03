#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int,int>> index(N);
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        index[i] = make_pair(a, i);
    }

    sort(index.begin(), index.end());

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[index[i].second] = i;
    }

    for (int i : arr) {
        cout << i << " ";
    }
}