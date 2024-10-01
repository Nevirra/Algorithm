#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int arr[8001] = { 0 };
    int min = 4001;
    int max = -4001;
    double sum = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        sum += num;
        arr[num + 4000]++;

        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    // 산술평균
    int mean = round(sum / N);
    if (mean == -0) mean = 0;  // -0을 0으로 변환
    cout << mean << endl;

    int midIndex = N / 2;
    int median = 0, midCount = 0;
    for (int i = 0; i < 8001; ++i) {
        midCount += arr[i];
        if (midCount > midIndex) {
            median = i - 4000;
            break;
        }
    }
    cout << median << endl;

    int mode = 0;
    int maxCount = 0;
    int modeCount = 0;
    int modeIndex = -1;
    for (int i = 0; i < 8001; ++i) {
        if (arr[i] > maxCount) {
            maxCount = arr[i];
            mode = i - 4000;
            modeCount = 1;
            modeIndex = mode;
        }
        else if (arr[i] == maxCount) {
            modeCount++;
            if (modeCount == 2) {
                mode = i - 4000;
            }
        }
    }
    cout << mode << endl;

    int range = max - min;
    cout << range << endl;

    return 0;
}
