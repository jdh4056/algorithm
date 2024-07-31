#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> arr;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        arr.push_back(str);
    }

    sort(arr.begin(), arr.end(),
        [](string a, string b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() < b.size();
        });

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;

    }
}