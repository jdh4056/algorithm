#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    cin >> year;

    int hong = 1946;

    int var = year - hong;
    cout << var;
}