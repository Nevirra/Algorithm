#include <cstdio>
using namespace std;

void Sort(int arr[], int N) {
	int i, j, index, temp;
	for (i = 0; i < N - 1; i++) {
		index = i;
		for (j = i + 1; j < N; j++) {
			if (arr[j] < arr[index]) {
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
}

int main() {
	int N;
	scanf("%d", &N);

	int integer[1000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &integer[i]);
	}

	Sort(integer, N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", integer[i]);
	}
}
