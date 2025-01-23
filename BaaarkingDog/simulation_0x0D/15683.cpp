#include <bits/stdc++.h>
using namespace std;

int n,m;
int office[10][10];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int mncnt = INT_MAX;
vector<tuple<int,int,int>> cctvs;
vector<vector<vector<int>>> direction = {
    {},
    {{0},{1},{2},{3}},
    {{0, 2}, {1, 3}},
    {{0, 1}, {1, 2}, {2, 3}, {3, 0}},
    {{0,1,2},{1,2,3},{2,3,0},{3,0,1}},
    {{0,1,2,3}}
};

void func(int k) {
    if (k == cctvs.size()) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (office[i][j] == 0) cnt++;
            }
        }
        mncnt = min(mncnt, cnt);
        return;
    }

    auto [x, y, type] = cctvs[k];

    for (auto dirs : direction[type]) {
        vector<pair<int, int>> changed;

        for (int dir : dirs) {
            int nx = x, ny = y;
            while (true) {
                nx += dx[dir];
                ny += dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) break;
                if (office[nx][ny] == 6) break;
                if (office[nx][ny] >= 1 && office[nx][ny] <= 5) continue;
                if (office[nx][ny] == 0) {
                    office[nx][ny] = 7;
                    changed.push_back({nx, ny});
                }
            }
        }

        func(k + 1);

        for (auto [cx, cy] : changed) {
            office[cx][cy] = 0;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> office[i][j];
            if (1 <= office[i][j] && office[i][j] <= 5) {
                cctvs.push_back({i, j, office[i][j]});
            }
        }
    }
    func(0);
    cout << mncnt;
}

