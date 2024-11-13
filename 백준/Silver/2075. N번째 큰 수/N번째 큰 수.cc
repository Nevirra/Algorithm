#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // 입력 속도 최적화
    cin.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> table(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> table[i][j];
        }
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (minHeap.size() < N) {
                minHeap.push(table[i][j]);
            }
            else if (table[i][j] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(table[i][j]);
            }
        }
    }

    cout << minHeap.top() << endl;

    return 0;
}
