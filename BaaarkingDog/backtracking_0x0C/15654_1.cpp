#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int res[10];

void func(int k, int st) {
    if (k == m) { // m개의 수를 모두 고른 경우
        for (int i = 0; i < m; ++i) {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = st; i < n; ++i) { // 시작점 st부터 탐색
        res[k] = arr[i];          // k번째 위치에 arr[i] 저장
        func(k + 1, 0);           // 다음 숫자를 선택 (중복 허용 위해 0부터)
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // 사전순 출력을 위해 정렬
    func(0, 0);         // 백트래킹 시작

    return 0;
}
