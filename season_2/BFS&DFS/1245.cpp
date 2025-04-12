#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[102][72];
bool vis[102][72];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int cnt = 0;
    for (int i =0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || vis[i][j]) continue;
            cnt++;
            cout << "+cnt=" << cnt << '\n';
            queue<pair<int, int> >q;
            vis[i][j] = 1;
            q.push({i,j});
            while (!q.empty()) {
                auto cur = q.front(); q.pop();
                cout <<"cur:"<< cur.Y << " " << cur.X << '\n';
                for (int dir = 0; dir < 8; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0||ny >= m) continue;
                    if (vis[nx][ny] || board[nx][ny] == 0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                    if (board[nx][ny] > board[cur.X][cur.Y]) {
                        cout << "!cur: " << cur.Y << " " << cur.X << '\n';
                        cnt--;
                    }
                }
            }
            cout <<"cnt=" << cnt << '\n';
        }
    }
    cout << cnt;
}