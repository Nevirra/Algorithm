#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int* cards, int N, int target) {
	int left = 0;
	int right = N - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (cards[mid] == target) {
			return true;
		}
		else if (cards[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return false;
}

int main() {
	int N;
	cin >> N;
	int* cards = new int[N];

	for (int i = 0; i < N; ++i) {
		cin >> cards[i];
	}

	sort(cards, cards + N);

	int M;
	cin >> M;
	int* queries = new int[M];

	for (int i = 0; i < M; ++i) {
		cin >> queries[i];
	}

	for (int i = 0; i < M; ++i) {
		if (binarySearch(cards, N, queries[i])) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
	cout << endl;

	delete[] cards;
	delete[] queries;

}
