#include <stdio.h>

int josephus(int n, int k) {
    int res = 0;
    for (int i = 2; i <= n; i++) {
        res = (res + k) % i;
    }
    return res + 1;
}

int main() {
    int NC, n, k;
    scanf("%d", &NC);
    for (int i = 1; i <= NC; i++) {
        scanf("%d %d", &n, &k);
        int resultado = josephus(n, k);
        printf("Case %d: %d\n", i, resultado);
    }
    return 0;
}
