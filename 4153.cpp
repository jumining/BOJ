#include <iostream>
using namespace std;


int main() {
    while(1) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0) break;
        else {
            //최대찾기
            int max{b};
            bool state{0};
            if (a >= b) max = a;
            if (c >= max) max = c;
            
            //판별
            if (max==a) {
                if(max*max == b*b + c*c) state=1;
            }
            else if (max==b) {
                if(max*max == a*a + c*c) state=1;
            }
            else if (max==c) {
                if(max*max == a*a + b*b) state=1;
            }
            
            //출력
            if (state==1) cout << "right\n";
            if (state==0) cout << "wrong\n";
        }
    }
}
