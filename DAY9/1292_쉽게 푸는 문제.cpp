#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	vector<int> v(1000);
	cin >> a >> b;
	int idx = 0;
	for (int i = 1;i<=1000; i++) {
		for (int j = 0; j < i && idx < 1000; j++) {
			v[idx++] = i;
		}
	}
	int ans = 0;
	

	for (int i = a-1; i <= b-1; i++) {
		ans += v[i];
	}


	cout << ans;
	return 0;
}
