#include <iostream>
#include <string>
using namespace std;

#define index 100000

void push(int stack[], int x, int* top);
int pop(int stack[], int* top);
void size(int* top);
void empty(int* top);
void Top(int stack[], int* top);

int main() {
    int n, top = -1, in, num = 0;
    int stack[index];
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> in;
            push(stack, in, &top);
        }
        else if (str == "pop") {
            num = pop(stack, &top);
            cout << num << endl;
        }
        else if (str == "size") {
            size(&top);
        }
        else if (str == "empty") {
            empty(&top);
        }
        else if (str == "top") {
            Top(stack, &top);
        }
        else
            return -1;
    }

    return 0;
}

void push(int stack[], int x, int* top) {
    if (*top >= index - 1)
        return;
    else
        stack[++(*top)] = x;
}

int pop(int stack[], int* top) {
    if (*top == -1)
        return -1;
    else
        return stack[(*top)--];
}

void size(int* top) {
    cout << *top + 1 << endl;
}

void empty(int* top) {
    int n;
    n = (*top == -1) ? 1 : 0;
    cout << n << endl;
}

void Top(int stack[], int* top) {
    int n;
    n = (*top == -1) ? -1 : stack[*top];
    cout << n << endl;
}
