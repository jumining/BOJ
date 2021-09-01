#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;
int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m; 
    queue<pair<int,int>> Q;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> board[i][j];
            if(board[i][j]==1) {
                Q.push({i,j});
            }
            if(board[i][j]==0) {
                dist[i][j] = -1;
            }
        }
    }
 
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if( nx<0 || ny <0 || nx>=m || ny>=n) continue;
            if( dist[nx][ny] >= 0 ) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(dist[i][j]==-1) {
                cout << -1;
                return 0;
            }
            ans = max(ans,dist[i][j]);
        }
    }
    cout << ans;

}

//x축 y축 변수 헷갈리지 말자.
