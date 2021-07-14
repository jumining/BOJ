#include <iostream>
 
using namespace std;
 
int main() {
    while (1) {
        unsigned int count;
        cin >> count;
        unsigned int n;
        cin >> n;
        unsigned int sum = 0;
        unsigned int i = 1;
 
        for (int j = count - 1; j > 0; j--)
            i *= 10;
 
        for (; count > 0 && n > 0; count--, i /= 10) {
            sum += n / i;
            n -= (n / i) * i;
        }
        cout << sum << endl;
    }
}
