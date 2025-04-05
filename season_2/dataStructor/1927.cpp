#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int sz = 0;

void push(int x) {
    heap[++sz] = x;
    int idx = sz;
    while (idx != 1) {
        int par = idx/2;
        if (heap[idx] >= heap[par]) break;
        swap(heap[par], heap[idx]);
        idx = par;
    }
}

int top() {
    return heap[1];
}

void pop() {
    heap[1] = heap[sz--];
    int idx = 1;

    while (2*idx <= sz) {
        int lc = 2*idx, rc = 2*idx + 1;

        int min_child = lc;
        if (rc <= sz && heap[rc] < heap[lc]) min_child = rc;

        if (heap[idx] <= heap[min_child]) break;
        swap(heap[idx], heap[min_child]);
        idx = min_child;
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    while (n--) {
        int x; cin>> x;
        if (x > 0) {
            push(x);
        } else {
            if (sz == 0) cout << 0 << '\n';
            else {
                cout << top() << '\n';
                pop();
            }
        }
    }
}