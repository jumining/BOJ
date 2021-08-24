#include <iostream>
using namespace std;

int S[302]; //계단 최대 개수 300
int D[302]; //dp문제 풀 배열
int N, sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //계단 개수 입력
    cin >> N;
    
    //계단 점수 입력
    for(int i=1; i<=N; i++) {
        cin >> S[i];
        sum += S[i];
    }
    
    if (N<=2) {cout << sum; return 0;}
    
    //초기값
    D[1] = S[1];
    D[2] = S[2];
    D[3] = S[3];
    
    //점화식, 최솟값 찾기
    for(int k=4; k<=N-1; k++) {
        //k번째 계단까지 올라섰을 때 밟지 않을 계단의 합의 최솟값, k번째 계단은 반드시 밟지 않음.
        D[k] = min(D[k-2],D[k-3]) + S[k];
    }
    
    //최댓값 출력 = 총합 - 최솟값
    cout << sum - min(D[N-1], D[N-2]);
    
}
