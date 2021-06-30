#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++) { //1,2,3,4,5,6,7---,N
        q.push(i);
    }
    cout << "<";
    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1) {
            cout << q.front();
            q.pop();
        }
        else {
            cout << q.front() << ", ";
            q.pop();
        }
        
    }
    cout << ">";


}

//1번부터 N번까지 N명 사람이 원이루고 앉음.
//양의 정수 K. K번째 사람 죽임.
//N명의 사람 모두 죽을 때까지 반복.
//사람이 제거되는 순서(N,K)는 요세푸스 순열
//
//(7,3) 7명의 사람 3번째 계속 죽이면 <3,6,2,7,5,1,4>
// 1 2 3 4 5 6 7
// 3번째 죽 -> 1 2 0(3) 4 5 6 7
// 3번째 죽 -> 1 2 0 4 5 0(6) 7
// 3번째 죽 -> 1 0(2) 0 4 5 0 7
// 3번째 죽 -> 1 0 0 4 5 0 0(7)
// 3번째 죽 -> 1 0 0 4 0(5) 0 0
// 3번째 죽 -> 0(1) 4
// 3번째 죽 -> 0(4)

