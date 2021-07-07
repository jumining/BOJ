//2010

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int m;
	cin >> m;
	
	int tmp{ m };

	for (int i = 0; i < n-1; i++) {
		int m;
		cin >> m;

		tmp = tmp-1+m;
	}
	cout << tmp;
}
