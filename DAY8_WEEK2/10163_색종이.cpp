#include <iostream>
using namespace std;
#define MAX_N 1001

int T; 
int arr[MAX_N][MAX_N] = { 0, };
int ans[101];

void fill(int x, int y, int dx, int dy, int n) {
    for (int i = x; i < x + dx; i++) {
        for (int j = y; j < y + dy; j++) {
            arr[i][j] = n;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //색종이 장수 입력
    cin >> T; 

    //색종이 놓기
    for (int i = 1; i <= T; i++) {
        int x, y, dx, dy;
        cin >> x >> y >> dx >> dy;
        fill(x, y, dx, dy, i);
    }

    //색종이 칸 수 세기
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            ans[arr[i][j]]++;
        }
    }

    //출력
    for (int i = 1; i <= T; i++) {
        cout << ans[i] << "\n";
    }
  
}


