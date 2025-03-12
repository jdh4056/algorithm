#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    string strA = to_string(a);
    reverse(strA.begin(), strA.end());
    int reverseA = stoi(strA);
    string strB = to_string(b);
    reverse(strB.begin(), strB.end());
    int reverseB = stoi(strB);

    cout << max(reverseA, reverseB);
}