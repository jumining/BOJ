#include <iostream>
#include <queue>
using namespace std;

int main() {
	int T;
	cin >> T;	

	while (T--) {
		//테스트 케이스 반복

		//N개의 문서, M번째 문서는 몇번째로 인쇄되는가?

		//우선순위 큐 활용하기
		int N, M; 	
		cin >> N >> M;
		int cnt = 0;
		queue<pair<int, int>> q;
		priority_queue <int> pq;

		for (int i = 0; i < N; i++) {
			// queue에 push
			int x;
			cin >> x;
			q.push({ i,x }); //push 할 때 대괄호 묶어서 두 데이터 넣기
			pq.push(x);
		}

		while (!q.empty()) {
			// 중요도 비교 반복
			int nowidx = q.front().first;
			int nowval = q.front().second;
			q.pop();
			
			if (pq.top() == nowval) {
				pq.pop();
				cnt++;
				if (nowidx == M) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ nowidx, nowval });
			}
		
		}
		

		//두번째 예제 4개의 문서, 인덱스 2의 문서는 몇번째에 인쇄되는가?
		// 1 2 3 4
		// q =(0,1) (1,2) (2,3) (3,4)
		// pq = 4 3 2 1
		// nowidx = 0, nowval = 1
		// 중요도가 가장 높은 문서가 현재문서의 중요도와 같다면 그대로 인쇄(pop)
		// 인쇄 횟수 증가(cnt)
		// 그 상황에서 내가 찾고자하는 문서와 현재 문서가 같다면 바로 cnt 출력
		// 아니라면, 뒤에 다시 넣고 그 이후 반복 실행.

	}
	return 0;
	
}
//ex) 4개의문서 2번째(3)에 있는 문서는 몇번째로 인쇄되는가?
		// 1 2 3 4
		// 중요도 3

// 큐의 가장 앞 문서의 중요도 확인
// 나머지 문서들 중에 앞 문서보다 중요도가 높은 문서 있다면 맨 뒤로 보낸다
// 만약 가장 앞 문서의 중요도가 제일 높다면, 바로 인쇄를 한다.
//
// (A(2) B(1) C(4) D(3))
// 1 4 3 2
// 4 3 2 1 -> C 인쇄, pop -> 3 2 1
// D인쇄, pop -> 2 1
// A인쇄, pop -> 1
// 남은게 없을 때 까지 반복

// 맨 왼쪽은 0번째라고 하자
// 중요도 같은 문서 있을 수도
//


