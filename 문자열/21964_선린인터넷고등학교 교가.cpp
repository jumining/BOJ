#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string s;
    cin >> s;
    for (int i=N-5; i<=N-1; i++) {
        cout << s[i];
    }
    
    return 0;
}
