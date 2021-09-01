#include<iostream>
using namespace std;;

int D[1000002];
int pre[1000002];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //입력
    cin >> n;
    
    //초기값
    D[1] = 0;
    
    //계산
    for (int i = 2; i <= n; i++) {
        D[i] = D[i - 1] + 1;
        pre[i] = i-1;
        if (i % 2 == 0 && D[i] > D[i/2] + 1) {
            D[i] = D[i / 2] + 1;
            pre[i] = i/2;
        }
        if (i % 3 == 0 && D[i] > D[i/3] + 1) {
            D[i] = D[i / 3] + 1;
            pre[i] = i/3;
        }
    }

    //출력
    cout << D[n] << "\n";
  
    //경로 복원 - 야매 연결리스트
    int cur = n;
    while(1) {
        cout << cur <<' ';
        if (cur == 1) break;
        cur = pre[cur];
    }
}
    



