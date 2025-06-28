#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int n1, d1, n2, d2, rn, rd;
        char barra1, barra2, op;
        
        scanf("%d %c %d %c %d %c %d", &n1, &barra1, &d1, &op, &n2, &barra2, &d2);

        switch (op) {
            case '+':
                rn = n1 * d2 + n2 * d1;
                rd = d1 * d2;
                break;
            case '-':
                rn = n1 * d2 - n2 * d1;
                rd = d1 * d2;
                break;
            case '*':
                rn = n1 * n2;
                rd = d1 * d2;
                break;
            case '/':
                rn = n1 * d2;
                rd = n2 * d1;
                break;
        }

        int simplifica = mdc(rn < 0 ? -rn : rn, rd);
        int sn = rn / simplifica;
        int sd = rd / simplifica;

        printf("%d/%d = %d/%d\n", rn, rd, sn, sd);
    }
    return 0;
}
