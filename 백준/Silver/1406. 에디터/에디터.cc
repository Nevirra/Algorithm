#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string initial;
    cin >> initial;

    list<char> editor(initial.begin(), initial.end());

    int M;
    cin >> M;

    auto cursor = editor.end();

    while (M--) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (cursor != editor.begin()) {
                cursor--;
            }
        }
        else if (command == 'D') {
            if (cursor != editor.end()) {
                cursor++;
            }
        }
        else if (command == 'B') {
            if (cursor != editor.begin()) {
                cursor--;
                cursor = editor.erase(cursor);
            }
        }
        else if (command == 'P') {
            char ch;
            cin >> ch;
            editor.insert(cursor, ch);
        }
    }

    for (char c : editor) {
        cout << c;
    }
    cout << '\n';

    return 0;
}