#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    map<string, int> treeCount;
    string tree;
    int total = 0;

    while (getline(cin, tree)) { 
        treeCount[tree]++;
        total++;
    }

    cout << fixed << setprecision(4);
    for (const pair<string, int>& pair : treeCount) {
        double percentage = ((double)(pair.second) / total) * 100;
        cout << pair.first << " " << percentage << "\n";
    }

    return 0;
}
