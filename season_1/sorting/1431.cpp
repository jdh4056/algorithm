#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(),
        [](string a, string b) {
            if (a.size() == b.size()) {
                int sumA = 0;
                int sumB = 0;
                for (char c: a) {
                    if (isdigit(c)) {
                        sumA += c - '0';
                    }
                }
                for (char c : b) {
                    if (isdigit(c)) {
                        sumB += c - '0';
                    }
                }
                if (sumA == sumB) {
                    return a < b;
                }
                return sumA < sumB;
            }
            return a.size() < b.size();
        });

    for (string str : arr){
        cout << str << endl;
    }
}