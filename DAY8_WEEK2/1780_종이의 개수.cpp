// 재귀, 분할 정복

#include <iostream>
using namespace std;
#define MAX_N 2188

int N;
int paper[MAX_N][MAX_N];
int ans[3];

//(x,y)부터 가로로 n개, 세로로 n개의 종이에 같은 숫자로 이루어졌는지 확인
bool same(int x, int y, int n) {
    for(int i=x; i<x+n; i++) {
        for(int j=y; j<y+n; j++) {
            if (paper[x][y] != paper[i][j])
                return false;
        }
    }
    return true;
}

//(x,y)부터 가로로 n개, 세로로 n개의 종이개수를 파악하는 함수
void solve(int x, int y, int n) {
    //같은 숫자로 이루어진 종이일 경우
    if (same(x,y,n)) {
        ans[paper[x][y] + 1] += 1;
        //-1은 0에 저장, 0은 1에 저장, 1은 2에 저장이여서 +1해주기
        return;
    }
    
    int m = n/3;
    
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            solve(x+i*m,y+j*m, m);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> paper[i][j];
        }
    }//입력 끝
    
    solve(0,0,N);
    
    for(int i=0; i<3; i++) cout << ans[i] <<"\n"; //답 출력
    
    return 0;
   
    
    
}

