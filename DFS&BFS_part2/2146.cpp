#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[102][102];
int dist[102][102];
int dx[8] = {-2, 0, -1, 0, 1, 0, 2, 0};
int dy[8] = {0, -2, 0, -1, 0, 1, 0, 2};
int N;

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int x,y;
            cin >> x >> y;
            dist[x][y] = 1;
            queue<pair<int,int>> q;
            q.push({x,y});

            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 8; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                        continue;
                    if ()
                }
            }
        }
    }
}