#include <iostream>
using namespace std;

string s;
int arr[26] {0};

void input() {
    cin >> s;
}

void solution() {
    for(auto idx : s) {
        arr[idx-'a']++;
    }
}

void output() {
    for(auto val : arr) {
        cout << val << " ";
    }
}

int main() {
    input();
    solution();
    output();
}
