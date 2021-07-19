#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;
string board[102];
int dist[102][102];
int n,m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //입력
    cin >> n >> m; //n세로칸수 m가로칸수
    for(int i=0; i<n; i++) {
        cin >> board[i];
    }//입력끝
 
    queue<pair<int,int>> Q;
    dist[0][0]=1;
    Q.push({0,0});
    while(!Q.empty()) {
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if( nx<0 || ny <0 || nx>=n || ny>=m) continue;
            if(dist[nx][ny]>0 || board[nx][ny] !='1' ) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    
    //출력
    cout << dist[n-1][m-1];
    
}
