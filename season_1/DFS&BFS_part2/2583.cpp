#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[100][100];
bool vis[100][100];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int M,N,K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> K;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            board[i][j] = 1;
        }
    }

    for (int i = 0; i < K; ++i) {
        int x1,y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1; j < y2; ++j) {
            for (int z = x1; z < x2; ++z) {
                board[z][j] = 0;
            }
        }
    }

    int num = 0;
    vector<int> numOrder;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (board[i][j] == 0 || vis[i][j])
                continue;
            num++;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i, j});

            int area = 0;
            while (!q.empty()) {
                area++;
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
            numOrder.push_back(area);
        }
    }
    sort(numOrder.begin(), numOrder.end());
    cout << num << '\n';
    for (int i = 0; i < numOrder.size(); ++i) {
        cout << numOrder[i] << '\n';
    }
}