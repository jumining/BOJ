#include<iostream>
using namespace std;

int n, k, stamp, c;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	
	while (cin >> n >> k) {
		c = n; stamp =n;
		
		while(stamp >= k) {
			stamp -= k;
			stamp++;
			c++;
		}
		cout << c << "\n";
	}
	
}

