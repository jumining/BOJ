#include <iostream>
using namespace std;

int T;
int ans[3] = { 0, };
int flag = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 입력
    cin >> T;
    
    // 풀이
    while (T >= 300) {
        ans[0]++;
        T -= 300;
    }
    while (T >= 60) {
        ans[1]++;
        T -= 60;
    }
    while (T > 0) {
        ans[2]++;
        T -= 10;
    }
    if (T < 0) flag = 0;

    // 출력
    if (flag) {
        for (int i = 0; i < 3; i++) {
            cout << ans[i] << " ";
        }
    }
    else cout << "-1";
}


