#include <bits/stdc++.h>
using namespace std;

struct def {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    priority_queue<int, vector<int>, def> absHeap;

    int N;
    cin >> N;
    int a;
    for (int i = 0; i < N; ++i) {
        cin >> a;

        if (a == 0){
            if (absHeap.empty()) {
                cout << 0 << '\n';
            } else {
                cout << absHeap.top() << '\n';
                absHeap.pop();
            }
        } else {
            absHeap.push(a);
        }
    }
}