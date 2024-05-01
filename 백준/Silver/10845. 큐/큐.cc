#include <iostream>
#include <string>
using namespace std;
#define MAX_SIZE 10000

class Queue {
private:
    int data[MAX_SIZE];
    int frontindex;
    int backindex;

public:
    Queue() {
        frontindex = 0;
        backindex = 0;
    }

    void push(int num) {
        data[backindex] = num;
        backindex = (backindex + 1) % MAX_SIZE;
    }

    void pop() {
        if (empty()) {
            cout << "-1" << endl;
            return;
        }
        cout << data[frontindex] << endl;
        frontindex = (frontindex + 1) % MAX_SIZE;
    }

    int size() {
        return (backindex - frontindex + MAX_SIZE) % MAX_SIZE;
    }

    bool empty() {
        return frontindex == backindex;
    }

    int front() {
        if (empty()) return -1;
        return data[frontindex];
    }

    int back() {
        if (empty()) return -1;
        return data[(backindex - 1 + MAX_SIZE) % MAX_SIZE];
    }
};

int main() {
    int N;
    cin >> N;

    Queue q;

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;

        if (command == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (command == "pop") {
            q.pop();
        }
        else if (command == "size") {
            cout << q.size() << endl;
        }
        else if (command == "empty") {
            cout << (q.empty() ? "1" : "0") << endl;
        }
        else if (command == "front") {
            cout << q.front() << endl;
        }
        else if (command == "back") {
            cout << q.back() << endl;
        }
    }
}
