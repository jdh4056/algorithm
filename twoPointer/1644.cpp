#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> getPrimes(int n) {
    vector<bool> isPrime(n+1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> primes = getPrimes(n);

    int st = 0, en = 0;
    int sum = 0;
    long long count = 0;
    while (en < primes.size() || sum >= n) {
        if (sum == n) {
            count++;
            sum -= primes[st++];
        } else if (sum < n) {
            if (en < primes.size()) {
                sum += primes[en++];
            } else {
                break;
            }
        } else {
            sum -= primes[st++];
        }
    }
    cout << count;
}