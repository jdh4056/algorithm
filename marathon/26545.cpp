#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(n--) {
        int num;
        cin >> num;
        sum += num;
    }

    cout << sum;
}