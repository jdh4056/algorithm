#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int N = A * B * C;
    int arr[10] ={};

    string str = to_string(N);

    for (int i = 0; i < 10; ++i) {
        arr[str[i] - '0']++;
    }

    for (int i : arr) {
        cout << i << " ";
    }
}