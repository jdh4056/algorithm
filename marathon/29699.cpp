#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "WelcomeToSMUPC";
    int N;
    cin >> N;
    int idx = (N - 1) % str.length();
    cout << str[idx];
}