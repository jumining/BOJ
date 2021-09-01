#include <iostream>
using namespace std;

int n, m;
int S[100004];
int D[100004];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //입력
    cin >> n >> m;
    
    //초기값
    D[0] = S[0];
    
    //입력과 계산
    for(int k=1; k<=n; k++) {
        cin >> S[k];
        D[k] = D[k-1] + S[k];
    }
    
    
    while(m--) {
        int i, j;
        cin >> i >> j;
        cout << D[j] - D[i-1] <<"\n";
    }
}
