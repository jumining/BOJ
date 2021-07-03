#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
}

int main() {
    int N; cin >> N;
    int result = 0;
    while (N--) {
        int n; cin >> n;
        if (isPrime(n)) {
            result++;
        }

    }
    cout << result << "\n";

}
