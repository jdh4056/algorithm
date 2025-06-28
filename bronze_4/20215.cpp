#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    double res = (static_cast<double>(w) + static_cast<double>(h)) - sqrt(static_cast<double>(w) * w + static_cast<double>(h) * h);
    cout << fixed << setprecision(9) << res;
}