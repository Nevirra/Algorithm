// 계속 시간초과가 뜨길래 찾아보니 cin, cout 속도 때문이라고 해서 scanf와 printf로 작성했습니다
#include <cstdio>
#include <algorithm> // sort함수 사용
using namespace std;

// 이진 탐색 부분을 찾아보고 참고했습니다
void binarySearch(int A[], int size, int m) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 찾은 경우
        if (A[mid] == m) {
            printf("1\n");
            return;
        }
        // 중간값이 찾는 값보다 작은 경우 오른쪽 부분 탐색
        else if (A[mid] < m) {
            left = mid + 1;
        }
        // 중간값이 찾는 값보다 큰 경우 왼쪽 부분 탐색
        else {
            right = mid - 1;
        }
    }
    // 찾지 못한 경우
    printf("0\n");
}

int main() {
    int N, M;
    scanf("%d", &N);

    int A[100000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // 배열 A를 정렬
    sort(A, A + N);

    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        int m;
        scanf("%d", &m);

        // 이진 탐색 함수 호출하여 m을 배열 A에서 찾음
        binarySearch(A, N, m);
    }
}
