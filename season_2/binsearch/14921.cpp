#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int left = 0, right = N - 1;
    int bestSum = 2e9 + 1;
    int ansL = -1, ansR = -1;

    while (left < right) {
        int sum = A[left] + A[right];
        if (abs(sum) < abs(bestSum)) {
            bestSum = sum;
            ansL = A[left];
            ansR = A[right];
        }
        if (sum < 0) left++;
        else if (sum > 0) right--;
        else break;
    }

    cout << bestSum;
}