// long long 쓰는 거 주의

#include<iostream>
using namespace std;;

int N;
long long d[91];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    
    //초기값
    d[0]=0; d[1]=1;
 
    //점화식
    for(int i=2; i<=N; i++) {
        d[i] = d[i-2] + d[i-1];
    }
    
    cout << d[N] << "\n";
}
    


