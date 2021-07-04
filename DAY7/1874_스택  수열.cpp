#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<string> v;
int arr[100001];

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        int n; cin >> n;
        arr[i] = n;
    }
    
    int i{1};
    int j{1};
    while(1) {
        if (!s.empty() && s.top() == arr[j] ) {
            s.pop();
            v.push_back("-");
            j++;
            if ( j > N ) break;
            if (!s.empty() && s.top() > arr[j]) {
                cout << "NO\n";
                return 0;
            }
        }
        if(!s.empty() && s.top() == arr[j]) {
            continue;
        }
        s.push(i);
        v.push_back("+");
        i++;
    }
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}

