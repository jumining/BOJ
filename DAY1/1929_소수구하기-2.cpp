#include <iostream>
using namespace std;

void PrimeNum(int arr[],int M, int N) {
    for(int i=2; i<=N; i++) {
        arr[i] = i;
    }
    arr[0] = arr[1] = 0;
    for(int i=2; i<=N;i++) {
        if (arr[i]==0) continue;
        else {
            for (int j = i*2; j<=N; j+=i) {
                arr[j] = 0; //삭제
            }
        }
    }
    for(int i = M; i<=N; i++) {
        if (arr[i] == 0) continue;
        else cout << arr[i] << "\n";
    }
}

int main() {
    int M, N; cin >> M >> N;
    int arr[N+1];
    PrimeNum(arr,M,N);
}
