#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[102][102];
bool vis[102][102];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int N;

int main() {
    cin >> N;
    int rainMx = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
            rainMx = max(rainMx, board[i][j]);
        }
    }
    int mxArea = 0;
    for (int i = 0; i <= rainMx; ++i) {
        memset(vis,0, sizeof(vis));
        int areaCount = 0;
        for (int j = 0; j < N; ++j) {
            for (int z = 0; z < N; ++z) {
                if (board[j][z] <= i) {
                    vis[j][z] = 1;
                }
            }
        }

        for (int j = 0; j < N; ++j) {
            for (int z = 0; z < N; ++z) {
                if (vis[j][z] == 1)
                    continue;
                areaCount++;
                queue<pair<int,int>> q;
                vis[j][z] = 1;
                q.push({j,z});

                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; ++dir) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= N || ny <0 || ny >= N)
                            continue;
                        if (vis[nx][ny] == 1)
                            continue;
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
                mxArea = max(areaCount, mxArea);
            }
        }
    }
    cout << mxArea;
}