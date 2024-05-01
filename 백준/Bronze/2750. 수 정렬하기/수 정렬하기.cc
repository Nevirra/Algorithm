#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int integer[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &integer[i]);
    }

    sort(integer, integer + N);

    for (int i = 0; i < N; i++) {
        printf("%d\n", integer[i]);
    }
}
