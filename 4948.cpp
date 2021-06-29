#include <iostream>
using namespace std;

int main() {
    //소수인 수는 0, 소수가 아닌 수는 1로 하기
    int n, cnt = 0;
    int i, j, arr[246913] = {0,}; //아무리 크더라도 입력 수 범위 생각하면 246913만큼 까지이다.
    
    arr[0] = arr[1] = 1; //0번째와 1번째는 절대 소수 불가능
    for(j=2; j<246913/j; j++) {
        if(arr[j]==1) continue; //이미 걸러진 수
        for (i=j*2; i<246913; i+=j) {
            if (i%j==0) arr[i] = 1;
        }
    }
    cin >> n;
    while(n!=0) {
        cnt = 0;
        for(i=n+1; i<=2*n; i++) {
            if(arr[i]==0) cnt++;
        }
        cout << cnt << "\n";
        cin >> n;
        
    }
    return 0;
}
