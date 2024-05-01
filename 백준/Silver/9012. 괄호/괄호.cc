#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidParenthesis(const string& s) {
    stack<char> parentheses;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == '(') {
            parentheses.push(c);
        }
        else if (c == ')') {
            if (parentheses.empty()) {
                return false;
            }
            parentheses.pop();
        }
    }
    return parentheses.empty();
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        string parenthesis;
        cin >> parenthesis;

        if (isValidParenthesis(parenthesis)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
