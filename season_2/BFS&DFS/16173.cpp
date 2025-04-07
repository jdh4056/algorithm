#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n;
int board[102][102];
bool vis[102][102];
int dx[2] = {1,0};
int dy[2] = {0,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i <n; i++) {
        for (int j =0; j <n ; j++) {
            cin >> board[i][j];
        }
    }
    queue<pair<int,int> > q;
    vis[0][0] = 1;
    q.push({0,0});
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 2; dir++) {
            int nx = cur.X + dx[dir] * board[cur.X][cur.Y];
            int ny = cur.Y + dy[dir] * board[cur.X][cur.Y];
            if (nx >= n || ny >= n) continue;
            if (vis[nx][ny]) continue;
            if (board[nx][ny] == -1) {
                cout << "HaruHaru";
                return 0;
            }
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
    cout << "Hing";
}