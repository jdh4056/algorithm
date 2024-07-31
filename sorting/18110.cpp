#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> arr;

    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        arr.push_back(score);
    }

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int Except = round(n * 0.15);

    sort(arr.begin(), arr.end());

    while(Except--) {
        arr.pop_back();
        arr.pop_front();
    }
    double total = 0;
    for (int i = 0; i < arr.size(); ++i) {
        total += arr[i];
    }

    int average = round(total / arr.size());

    cout << average;
}