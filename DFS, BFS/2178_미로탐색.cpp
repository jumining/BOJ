// bfs
// 백준
// 2178_미로탐색
// 08/30
#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;

string maze[101]; //N, M 최대 100
int dist[101][101]; //거리 저장 배열
int N, M;
int dx[4] = {-1, 1, 0, 0}; //상하좌우 x축 변경
int dy[4] = {0, 0, -1, 1}; //상하좌우 y축 변경

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //입력
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        cin >> maze[i]; //N개의 줄에 한줄씩 입력
    }
    
    queue<pair<int,int>> Q;
    dist[0][0] = 1; //방문
    Q.push({0,0});
    
    while(!Q.empty()) {
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++) { //인접노드 탐색
            int nx= cur.X + dx[i];
            int ny= cur.Y + dy[i];
        
            if (nx<0 || ny<0 || nx>=N || ny>=M) continue; //예외처리1 : 미로 범위 벗어남
            if (dist[nx][ny]>0 || maze[nx][ny] !='1' ) continue; //예외처리2 : 이미 방문 또는 길이 아님
            
            dist[nx][ny] = dist[cur.X][cur.Y] + 1; 
            Q.push({nx,ny});
        }
    }
    
    //출력 - 지나야 하는 최소 칸 수 출력
    cout << dist[N-1][M-1];
    





}





