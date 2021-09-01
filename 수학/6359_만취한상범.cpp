#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int arr[101] = {0,};
        for(int i=1; i<=n; i++) {
            for(int j=i; j<=n; j+=i) {
                if(arr[j]) arr[j] = 0;
                else arr[j] = 1;
            }
        }
        int cnt{0};
        for(int i=1; i<=n; i++) {
            if (arr[i]) cnt++;
        }
        cout << cnt << "\n";
    }
}

