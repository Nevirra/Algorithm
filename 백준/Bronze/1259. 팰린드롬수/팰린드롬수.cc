#include<iostream>
using namespace std;

bool vofflsemfha(string n) {
	int len = n.length();
	for (int i = 0; i < len / 2; i++) {
		if (n[i] != n[len - i - 1])
			return false;
	}
	return true;
}

int main() {
	string n;
	int index = 0, size = 100;
	string* num = new string[size];

	while (1) {
		cin >> num[index];
		if (num[index] == "0")
			break;
		if (index == size - 1) {
			size *= 2;
			string* temp = new string[size];
			for (int j = 0; j <= index; j++)
				temp[j] = num[j];
			delete[] num;
			num = temp;
		}
		index++;
	}

	for (int i = 0; i < index; i++) {
		if (vofflsemfha(num[i]))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	delete[] num;
}
