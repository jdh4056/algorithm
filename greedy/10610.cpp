#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    vector<int> arr;
    int sum = 0;
    bool zero = false;

    for (char c : N) {
        int i = c - '0';
        arr.push_back(i);
        sum += i;
        if (i == 0) {
            zero = true;
        }
    }

    if (sum % 3 != 0 || !zero) {
        cout << -1 << endl;
        return 0;
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i : arr) {
        cout << i;
    }
}