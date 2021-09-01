#include <iostream>
using namespace std;

void Solve(int h, int w, int n) {
    int Y{1};
    int X{1};
    int cnt{1};
    while(1) {
        if (cnt == n) break;
        cnt++;
        Y++;
        if(Y > h) {
            Y = 1;
            X++;
        }
    }
    
    //출력
    if (X < 10) cout << Y << 0 << X << "\n";
    else cout << Y << X << "\n";
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); //이거 안 썼을 때는 시간초과가 났다.
    int T; cin >> T;
    while(T--) {
        int h, w, n;
        cin >> h >> w >> n;
        Solve(h,w,n);
    }
    return 0;
}
