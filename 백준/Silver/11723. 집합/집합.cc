#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int M, x;
    string calc;
    int S = 0;

    cin >> M;
    while (M--) {
        cin >> calc;

        if (calc == "add") {
            cin >> x;
            S |= (1 << (x - 1));
        }
        else if (calc == "remove") {
            cin >> x;
            S &= ~(1 << (x - 1));
        }
        else if (calc == "check") {
            cin >> x;
            cout << ((S & (1 << (x - 1))) ? 1 : 0) << '\n';
        }
        else if (calc == "toggle") {
            cin >> x;
            S ^= (1 << (x - 1));
        }
        else if (calc == "all") { //GPT
            S = (1 << 20) - 1;
        }
        else if (calc == "empty") {
            S = 0;
        }
    }
}
