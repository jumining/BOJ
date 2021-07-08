#include<iostream>
#include<algorithm>
using namespace std;
int a[500001];
int b[500001];
int c[500001] = { 0, }; // 정답 저장 배열
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a, a + n); // 오름차순으로 정렬
	for (int i = 0; i < m; i++) {
		int right = n - 1; // 제일 오른쪽(맨 뒤) 인덱스
		int left = 0; // 제일 왼쪽(맨 앞) 인덱스
		while (left <= right) {
			int mid = (right + left) / 2;
			if (a[mid] == b[i]) {
				c[i] = 1;
				break;
			}
			if (a[mid] > b[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << c[i] << ' ';
	}
	cout << '\n';
}
