#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int S[1001][5]; // 집 비용 입력 배열
int D[1001][5]; //dp 문제 풀 배열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //집의 수 입력
    cin >> N;
    
    //비용 입력 (1-index로 입력)
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=3; j++) { // 빨, 초, 파 순서
            cin >> S[i][j];
        }
    }
    
    //초기값
    D[1][1] = S[1][1];
    D[1][2] = S[1][2];
    D[1][3] = S[1][3];
   
    /*
    D[2][1] = min(S[1][2], S[1][3]) + S[2][1];
    D[2][2] = min(S[1][1], S[1][3]) + S[2][2];
    D[2][3] = min(S[1][1], S[1][2]) + S[2][3];
    
    D[3][1] = min(D[2][2], D[2][3]) + S[3][1];
    D[3][2] = min(D[2][1], D[2][3]) + S[3][2];
    D[3][3] = min(D[2][1], D[2][2]) + S[3][3];
    */

    //점화식
    for(int k=2; k<=N; k++) {
        //k번째 집까지 칠할 때 비용의 최솟값, 단 k번째 집의 색깔은 1, 2, 3로 정해짐.
        D[k][1] = min(D[k-1][2], D[k-1][3]) + S[k][1];
        D[k][2] = min(D[k-1][1], D[k-1][3]) + S[k][2];
        D[k][3] = min(D[k-1][1], D[k-1][2]) + S[k][3];
    }
    
    // 모든 집을 칠하는 비용의 최솟값
    cout << min({D[N][1], D[N][2], D[N][3]});
    
}

