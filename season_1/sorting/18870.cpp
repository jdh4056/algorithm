#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;

    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    vector<int> sortArr = arr;

    sort(sortArr.begin(), sortArr.end());

    unordered_map<int, int> rank;
    int ranking = 0;
    for (int i : sortArr) {
        if (rank.find(i) == rank.end()) {
            rank[i] = ranking++;
        }
    }

    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = rank[arr[i]];
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
}