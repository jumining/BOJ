#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Queue {
public:
    Node* head;
    Node* tail;
    int q_size;

    Queue() {
        head = tail = NULL;
        q_size = 0;
    }

    void push(int X) {
        //정수 X를 큐에 넣는 연산
        Node* newNode = new Node(X);
        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        q_size++;

    }
    void pop() {
        //정수 빼고 출력, 없으면 -1 출력
        if (head != NULL) {
            cout << head->data << "\n";
            Node* tmp = head;
            head = head->next;
            delete tmp;
            q_size--;
        }
        else cout << -1 << "\n";
    }
    void size() {
        // 큐에 들어있는 정수 개수 출력
        cout << q_size << "\n";
    }
    void empty() {
        // 비어있으면 1, 아니면 0 출력
        if (head == NULL) {
            cout << 1 << "\n";
        }
        else cout << 0 << "\n";

    }
    void front() {
        //가장 앞 정수 출력, 없으면 -1 출력
        if (head == NULL) {
            cout << -1 << "\n";
        }
        else cout << head->data << "\n";
    }
    void back() {
        //가장 뒤 정수 출력, 없으면 -1 출력
        if (head == NULL) {
            cout << -1 << "\n";
        }
        else cout << tail->data << "\n";
    }

};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); //이거 안 썼을 때는 시간초과가 났다.
    int N;
    cin >> N;
    Queue q;
    while (N--) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "front") {
            q.front();
        }
        else if (s == "pop") {
            q.pop();
        }
        else if (s == "size") {
            q.size();
        }
        else if (s == "empty") {
            q.empty();
        }
        else if (s == "back") {
            q.back();
        }

    }

    return 0;
}
