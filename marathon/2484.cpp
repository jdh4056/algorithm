#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        int a,b,c,d;
        int arr[4];
        int cnt[10] = {0};
        int total = 0;
        int pairCont = 0;
        cin >> a >> b >> c >> d;
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;


        for (int i = 0; i < 4; i++) {
            cnt[arr[i]]++;

            if (cnt[arr[i]] == 4) {
                total = 50000 + arr[i] * 5000;
            } else if (cnt[arr[i]] == 3) {
                total = 10000 + arr[i] * 1000;
            } else if (cnt[arr[i]] == 2) {
                for (int j = 0; j < 10; j++) {
                    if (arr[i] == 2) {
                        pairCont++;
                    }
                }
                if (pairCont == 2) {
                    total = 2000 + cnt[arr[i]]
                }
            }
        }
    }
}