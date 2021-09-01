// 30의 배수이기 위한 조건
// 1. 일의 자리 수가 0
// 2. 각 자리 숫자의 합이 3의 배수
// 가장 큰 수를 만들어야하기 때문에 내림차순으로 정렬

// string 사용법 까먹지 말기
// algorithm에서 sort사용해서 내림차순 정렬

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string N; cin >> N;
    int sum {0};
    
    for(int i=0; i<N.size(); i++) {
        sum += N[i];
    }
    
    if (sum % 3 != 0) {
        cout << -1 << "\n"; //3의 배수가 아니면 탈락
        return 0;
    }
    if (N.find("0") == -1) { //0이 없으면 탈락
        cout << -1 <<"\n";
        return 0;
    }
    
    //출력
    sort(N.rbegin(), N.rend());
    cout << N << "\n";
    
    
    
    
}
