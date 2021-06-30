#include <iostream>
using namespace std;


int main() {
    int T; cin >> T; //테스트 케이스 입력
    
    //소수 배열만들기---------
    int arr[10001] = {0,};
    for(int i=2; i*i<=10000; i++) {
        for(int j=i*2; j<=10000; j+=i) {
            arr[j] = 1;
        }
    }
    //--------------------
    
    while(T--) {
        int n; cin >> n; //주어진 수 입력
        int i,j;
        for(i=j=n/2;;i++,j--) {
            if(!arr[i] && !arr[j]) {
                cout << j << " " << i <<"\n";
                break;
            }
        }
    }
    
    
}
