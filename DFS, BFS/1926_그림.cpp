#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;
int board[502][502];
bool vis[502][502];
int n,m,a;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //입력
    cin >> n >> m; //세로, 가로
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> board[i][j];
        }
    }//입력끝
    
    int cnt=0, M_area=0, area;


    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(board[i][j]!=1 || vis[i][j]) continue;
            queue<pair<int,int>> Q;
            vis[i][j]=1; cnt++; area=1;
            Q.push({i,j});
            while(!Q.empty()) {
                pair<int,int> cur = Q.front(); Q.pop();
                for(int i=0; i<4; i++) {
                    int nx = cur.X + dx[i];
                    int ny = cur.Y + dy[i];
                    if( nx<0 || ny <0 || nx>=n || ny>=m) continue;
                    if(vis[nx][ny] || board[nx][ny] !=1 ) continue;
                    vis[nx][ny] = 1; area++;
                    Q.push({nx,ny});
                }
                if (area >= M_area) M_area = area;
            }
        }
    }
    
    //출력
    cout << cnt <<"\n" << M_area<<"\n";
    
}
