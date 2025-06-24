#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a1,a2,a3;
    cin >> a1>>a2>>a3;


    int t1 = 0 * a1 + 2 * a2 + 4 * a3;

    int t2 = 2 * a1 + 0 * a2 + 2 * a3;

    int t3 = 4 * a1 + 2 * a2 + 0 * a3;

    cout << min({t1, t2, t3});
}
