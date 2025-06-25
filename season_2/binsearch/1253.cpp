#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int left = 0; int right = n - 1;
        ll target = v[i];
        while (left < right) {
            if (left == i) {
                left++;
                continue;
            } else if (right == i) {
                right--;
                continue;
            }

            ll sum = v[left] + v[right];
            if (sum == target) {
                cnt++;
                break;
            } else if (sum < target) {
                left++;
            } else right--;
        }
    }
    cout << cnt;
}