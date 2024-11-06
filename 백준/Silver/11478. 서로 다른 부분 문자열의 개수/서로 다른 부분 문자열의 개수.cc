#include <iostream>
#include <string>
#include <set>
using namespace std;

set<string> M;
string S;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> S;

	int i, j, l = S.length();

	for (i = 0; i < l; i++)
		for (j = i; j < l; j++)
			M.insert(S.substr(i, j - i + 1));

	cout << M.size();
}