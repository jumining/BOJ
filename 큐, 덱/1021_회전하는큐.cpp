#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main() {
    int count=0;
    deque<int> dq;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
        dq.push_back(i);
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        int index;
        for (int i = 0; i < dq.size(); ++i) {
            if (dq[i] == num) {
                index = i;
                break;
            }
        }
        if (index < dq.size() - index) {
            for (;;) {
                if (dq.front() == num) {
                    dq.pop_front();
                    break;
                }
                ++count;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            for (;;) {
                if (dq.front() == num) {
                    dq.pop_front();
                    break;
                }
                ++count;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout<<count;
}
