//dp문제 
//시간초과주의

#include<iostream>
using namespace std;;

int d[45][3];
int T, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //초기값
    d[0][0]=1; d[0][1]=0;
    d[1][0]=0; d[1][1]=1;
    
    //점화식
    for(int i=2; i<=40; i++) {
        d[i][0] = d[i-2][0] + d[i-1][0];
        d[i][1] = d[i-2][1] + d[i-1][1];
    }
    
    //테스트케이스
    cin >> T;
    
    while(T--) {
        cin >> n;
        cout << d[n][0] << " " << d[n][1] << "\n";
    }
   
}
    



