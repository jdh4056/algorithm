#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;

    bool operator<(const Point& other) const {
        if (x == other.x) {
            return y < other.y;
        }
        return x < other.x;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<Point> point(N);

    for (int i = 0; i < N; ++i) {
        cin >> point[i].x >> point[i].y;
    }

    sort(point.begin(), point.end());

    for (auto & i : point) {
        cout << i.x << " " << i.y << '\n';
    }
}