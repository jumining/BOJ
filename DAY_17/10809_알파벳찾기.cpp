#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	cin >> str;

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j <= str.size(); j++) {
			if (str[j] == i)
				break;
			count++;
		}
		if (count == (str.size() + 1)) cout << "-1" << " ";
		else cout << count << " ";
		count = 0;
	}

	return 0;
}
