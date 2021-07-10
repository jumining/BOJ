#include <iostream>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    string s; cin >> s;
    int dot{0};
    if (N>25) {
        for(int i=11; i<=N-13; i++) {
            if(s[i]==46) {
                dot = 6;
                break;
            }
            else dot = 3;
        }
    }
    
    
    //출력
    switch(dot) {
        case 3:
            for(int i=0; i<=10; i++) {
                cout <<s[i];
            }
            cout <<"...";
            for(int i=N-11; i<=N-1; i++) {
                cout << s[i];
            }
            break;
        case 6:
            for(int i=0; i<=8; i++) {
                cout << s[i];
            }
            cout << "......";
            for(int i=N-10; i<=N-1; i++) {
                cout << s[i];
            }
            break;
        default:
            for(int i=0; i<=N-1; i++) {
                cout << s[i];
            }
    }
}
