#include <iostream>
using namespace std;

// merge로 구현했으나 메모리 초과 문제가 발생해서, 다른 코드 참고해봤습니다.
/*
void merge(int* arr, int left, int mid, int right) {
    int Lsize = mid - left + 1;
    int Rsize = right - mid;

    int* L = new int[Lsize];
    int* R = new int[Rsize];

    for (int i = 0; i < Lsize; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < Rsize; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < Lsize && j < Rsize) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
        }
    }

    while (i < Lsize) {
        arr[k++] = L[i++];
    }
    while (j < Rsize) {
        arr[k++] = R[j++];
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int* num = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }

    mergeSort(num, 0, N - 1);

    for (int i = 0; i < N; ++i) {
        cout << num[i] << '\n';
    }

    delete[] num;
    return 0;
}
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int count[10001] = { 0 };

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        count[num]++;
    }

    for (int i = 0; i <= 10000; ++i) {
        while (count[i] > 0) {
            cout << i << '\n';
            count[i]--;
        }
    }

    return 0;
}
