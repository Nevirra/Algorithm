#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* people = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> people[i];
    }

    sort(people, people + N);

    int totalWaitTime = 0;
    int currentWaitTime = 0;

    for (int i = 0; i < N; ++i) {
        currentWaitTime += people[i];
        totalWaitTime += currentWaitTime;
    }

    cout << totalWaitTime << endl;

    delete[] people;
}
