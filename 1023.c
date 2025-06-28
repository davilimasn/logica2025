#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int pessoas;
    int consumo;
} Imovel;

int compare(const void *a, const void *b) {
    Imovel *ia = (Imovel *)a;
    Imovel *ib = (Imovel *)b;
    double ra = (double)ia->consumo / ia->pessoas;
    double rb = (double)ib->consumo / ib->pessoas;
    if (ra == rb) return 0;
    return ra < rb ? -1 : 1;
}

int main() {
    int n, cidade = 1;
    while (scanf("%d", &n) && n != 0) {
        int totalPessoas = 0, totalConsumo = 0;
        Imovel imoveis[1000000];
        int resumo[201] = {0};
        for (int i = 0; i < n; i++) {
            int p, c;
            scanf("%d %d", &p, &c);
            int media = c / p;
            resumo[media] += p;
            totalPessoas += p;
            totalConsumo += c;
        }

        if (cidade > 1) printf("\n");
        printf("Cidade# %d:\n", cidade++);
        for (int i = 0; i <= 200; i++) {
            if (resumo[i] > 0) {
                printf("%d-%d", resumo[i], i);
                n--;
                if (n) printf(" ");
            }
        }

        double media = (double)totalConsumo / totalPessoas;
        printf("\nConsumo medio: %.2lf m3.\n", floor(media * 100) / 100);
    }
    return 0;
}
