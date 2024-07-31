#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    vector<int> A;
    vector<int> B;
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = N - 1;
    int min_sum = INT_MAX;
    int result_left = 0;
    int result_right = N - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (abs(sum) < abs(min_sum)) {
            min_sum = sum;
            result_left = left;
            result_right = right;
        }
        if (sum < 0) {
            left++;
        }
        else {
            right--;
        }
    }

    if (arr[result_left] < arr[result_right]) {
        cout << arr[result_left] << " " << arr[result_right] << endl;
    } else {
        cout << arr[result_right] << " " << arr[result_left] << endl;
    }
}