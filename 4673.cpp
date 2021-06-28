#include <iostream>
using namespace std;

bool arr[10000] = { false };

void funcdn(int n) {
    int four, three, two, one;
    four = n / 1000;
    three = n % 1000 / 100;
    two = n % 100 / 10;
    one = n % 10;
    int next = four + three + two + one + n;
    if (next < 10000 && !arr[next]) {
        arr[next] = true;
        funcdn(next);
    }
    else return;

}

int main() {
    for (int i = 1; i < 10000; i++) {
        if (!arr[i]) funcdn(i);
    }

    for (int i = 1; i < 10000; i++) {
        if (arr[i] == false) cout << i << "\n";
    }
}
