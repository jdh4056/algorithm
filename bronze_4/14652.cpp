#include <iostream>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (cnt == k) {
                cout << i << " " << j;
                return 0;
            }
            cnt++;
        }
    }
}