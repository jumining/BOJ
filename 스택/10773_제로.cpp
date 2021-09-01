#include <iostream>
#include <stack>
using namespace std;


int main() {
    stack<int> s;
    int k; cin >> k;
    int sum{0};
    while(k--) {
        int n; cin >> n;
        if (n==0) s.pop();
        else s.push(n);
    }
    while(s.size()!=0) {
        sum += s.top();
        s.pop();
    }
    cout << sum <<"\n";
}

