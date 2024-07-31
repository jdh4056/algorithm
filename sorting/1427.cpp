#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    string N;
    cin >> N;

    for (char c : N) {
        arr.push_back(c - '0');
    }

    sort(arr.begin(), arr.end(), greater<>());

    for (int i : arr) {
        cout << i;
    }
}