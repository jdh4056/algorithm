#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dist[102][102];
int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};
int T, N;

int main() {
    cin >> T;
    cin >> N;


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int x,y, goalX, goalY;
            cin >> x >> y;
            cin >> goalX >> goalY;
            dist[x][y] = 1;
            queue<pair<int,int>> q;
            q.push({x,y});

            while (dist) {
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 8; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                        continue;

                }
            }
        }
    }
}