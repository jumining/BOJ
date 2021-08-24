#include <iostream>
using namespace std;

int n;
int D[1002]; //dp 문제 풀 배열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //n 입력
    cin >> n;
    
    //초기값
    D[1] = 1;
    D[2] = 2;


    // 점화식 - 2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수 / 10007
    for(int k=3; k<=n; k++) {
        D[k] = (D[k-1] + D[k-2]) % 10007;
    }
    
    // 출력
    cout << D[n];
}
