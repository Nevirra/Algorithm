#include<iostream>
#include<cstring>
using namespace std;
#define SIZE 10000

int main() {
	char *A = new char[SIZE], *B= new char[SIZE], *sum= new char[SIZE + 1] { 0 };
	cin >> A >> B;

	int aindex = strlen(A) - 1;
	int bindex = strlen(B) - 1;
	int sumindex = aindex > bindex ? aindex : bindex;

	for (int i = 0; i <= sumindex; i++) {
		if (aindex >= 0)
			sum[i] += A[aindex--] - '0';
		if (bindex >= 0)
			sum[i] += B[bindex--] - '0';

		if (sum[i] > 9) {
			sum[i] %= 10;
			sum[i + 1] = 1;
		}
	}
	if (sum[sumindex + 1] == 1)
		sumindex++;
	for (int i = sumindex; i >= 0; i--)
		cout << char(sum[i] + '0');
}
