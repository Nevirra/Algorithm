#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int start = 0, end = 0, sum = 0, count = 0;
    
    while (end < N) {
        if (sum < M) {
            sum += A[end++];
        } else if (sum > M) {
            sum -= A[start++];
        } else {
            count++;
            sum += A[end++];
        }
    }
    
    while (sum >= M && start < N) {
        if (sum == M) {
            count++;
        }
        sum -= A[start++];
    }

    cout << count << endl;

    return 0;
}
