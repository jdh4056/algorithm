#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[25];
bool vis[25][25];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> board[i];
    }
    int total = 0;
    vector<int> houseCount;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == '0' || vis[i][j]) {
                continue;
            }

            int house = 0;
            total++;
            queue<pair<int,int>> q;
            vis[i][j] = 1;
            q.push({i, j});

            while (!q.empty()) {
                house++;
                pair<int,int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != '1')
                        continue;
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
            houseCount.push_back(house);
        }
    }
    cout << total << '\n';
    sort(houseCount.begin(), houseCount.end());
    for (int i = 0; i < houseCount.size(); ++i) {
        cout << houseCount[i] << '\n';
    }
}