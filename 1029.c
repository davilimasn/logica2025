#include <stdio.h>

#define MAX 40

int main() {
    int n, x;
    int fib[MAX];
    int calls[MAX];

    fib[0] = 0;
    fib[1] = 1;
    calls[0] = 0;
    calls[1] = 0;

    for (int i = 2; i < MAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        calls[i] = calls[i - 1] + calls[i - 2] + 2;
    }

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        printf("fib(%d) = %d calls = %d\n", x, calls[x], fib[x]);
    }

    return 0;
}
