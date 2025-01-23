#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1002];
int fire[1002][1002];
int jihoon[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int r,c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        fill(fire[i], fire[i] + c , -1);
        fill(jihoon[i], jihoon[i] + c , -1);
    }
    for (int i = 0; i < r; ++i) {
        cin >> board[i];
    }

    queue<pair<int, int>> F;
    queue<pair<int, int>> J;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (board[i][j] == 'F') {
                F.push({i,j});
                fire[i][j] = 0;
            }
            if (board[i][j] == 'J') {
                J.push({i,j});
                jihoon[i][j] = 0;
            }
        }
    }

    while (!F.empty()) {
        pair<int,int> cur = F.front(); F.pop();
        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            F.push({nx, ny});
        }
    }

    while (!J.empty()) {
        pair<int, int> cur = J.front(); J.pop();
        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                cout << jihoon[cur.X][cur.Y] + 1;
                return 0;
            }
            if (jihoon[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (fire[nx][ny] != -1 && jihoon[cur.X][cur.Y] + 1 >= fire[nx][ny]) continue;
            jihoon[nx][ny] = jihoon[cur.X][cur.Y] + 1;
            J.push({nx,ny});
        }
    }

    cout << "IMPOSSIBLE";
}