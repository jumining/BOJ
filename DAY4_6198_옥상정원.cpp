#include <iostream>
#include <stack>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     
    stack<int> s;
    vector<int> vec(80001);
    int num;
    long long ans = 0;
 
    cin >> num;
 
    for (int i = 0; i < num; i++)
        cin >> vec[i];
     
    for (int i = 0; i < num; i++) {
        while(!s.empty() && s.top() <= vec[i])
            s.pop();  //vec[i]를 볼 수 없는 건물은 다 pop
        ans += (long long) s.size();
        s.push(vec[i]);
    }
    cout << ans << '\n';
}  
