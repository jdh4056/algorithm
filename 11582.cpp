#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> v_sort;

void sorting(int start, int end) {
    if (start == v.size()) return;

    for(int i = start; i < end; i++) {
        v_sort.push_back(v[i]);
    }
    sort(v_sort.begin(), v_sort.end());

    for(int i =0; i < end - start; i++) {
        cout << v_sort[i] << " ";
    }

    v_sort.clear();
    sorting(end, 2 * end - start);
}

int main() {
    int N = 0;
    cin >> N;

    int value = 0;
    for (int i = 0; i< N; i++) {
        cin >> value;
        v.push_back(value);
    }

    int k = 0;
    cin >> k;

    sorting(0, N/k);
    cout << "\n";
}
