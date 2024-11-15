#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[10];
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}

	int num = 0;
	for (int i = 0; i < 42; ++i) {
		for (int j = 0; j < 10; ++j)
			if (arr[j] == i) {
				num += 1;
				break;
			}
	}

	cout << num;
}