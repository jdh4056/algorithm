#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    // 5의 배수의 개수만큼 끝에 0이 추가되므로, 5의 배수를 카운트
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }

    cout << count << endl;

    return 0;
}
