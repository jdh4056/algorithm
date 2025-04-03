#include <bits/stdc++.h>
using namespace std;

int def(int num) {
    int sum = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main() {
    vector<bool> selfNum(10001, true);

    for (int i = 1; i <= 10000; ++i) {
        int notSelfNum = def(i);
        if (notSelfNum < 10000) {
            selfNum[notSelfNum] = false;
        }
    }

    for (int i = 1; i < 10000; ++i) {
        if (selfNum[i]) {
            cout << i << endl;
        }
    }
}
