#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    vector<pair<int, int>> arr;
    cin >> T;
    while (T--) {
        cin >> N;
        arr.clear();

        for (int i = 0; i < N; ++i) {
            int a,b;
            cin >> a >> b;
            arr.push_back({a, b});
        }
        sort(arr.begin(), arr.end());

        int cnt = 0;
        int count = 1;
        for (int i = 1; i < N; ++i) {
            if (arr[cnt].second > arr[i].second) {
                count++;
                cnt = i;
            }
        }
        cout << count << endl;
    }
}
