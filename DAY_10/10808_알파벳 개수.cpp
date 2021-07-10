#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int freq[26] = {};
    for(auto i : s) {
        freq[i - 'a']++;
    }
    for(int j = 0; j<26; j++)
        cout << freq[j] << ' ';
    
}
