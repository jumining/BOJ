#include <iostream>
using namespace std;

//골드바흐 파티션 출력 하수
void Solve(int arr[], int n) {
    int a = n/2; //a와 b를 더하면 n이 나옴
    int b = n/2;
    while(a>0 && b>0) {
        if (arr[a] == 0 && arr[b] == 0) { //두 수가 소수일 때 까지 반복
            cout << a << " " << b << "\n";
            break;
        }
        else { a--; b++; }
    }
}

int main() {
    int T; cin >> T; //테스트케이스
    while(T--) {
        int n; cin >> n; //주어진 수
        
        //소수 배열만들기---------
        int arr[10001] = {0,};
        arr[0] = arr[1] = 1;
        for(int i=2; i*i<=10000; i++) {
            if(arr[i]==1) continue;
            for(int j=i*2; j<=10000; j+=i) {
                if(j%i==0) arr[j] = 1;
            }
        }
        //--------------------
        
        Solve(arr, n); //주어진 수 n의 골드바흐 파티션을 출력하는 함수
    }
}
