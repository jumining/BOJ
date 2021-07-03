// 소인수 분해 알고리즘

#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=2; i<=n; i++) {
            int cnt{0};
            while(n%i == 0) {
                n /= i;
                cnt++;
            }
            if(cnt>0) cout << i << " " << cnt << "\n";
            
        }
    }
    return 0;
}
