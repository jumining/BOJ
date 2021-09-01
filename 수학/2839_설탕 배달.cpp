#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int min{6000};
    int b{0};
    for(int a=0; 5*a<=n; a++) {
        if(((n-5*a) % 3) != 0) continue;
        else {
            b=(n-5*a)/3;
        }
        if (a+b < min) min = a+b;
    }
    if (min == 6000) cout << -1 <<"\n";
    else cout << min << "\n";
}
