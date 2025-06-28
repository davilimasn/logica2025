#include <stdio.h>

int main() {
    double valor;
    int centavos;

    scanf("%lf", &valor);

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int reais = (int)valor;
    centavos = (int)((valor - reais) * 100 + 0.5);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = reais / notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtd, notas[i]);
        reais %= notas[i];
    }

    centavos += reais * 100;

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = centavos / moedas[i];
        if (moedas[i] >= 100)
            printf("%d moeda(s) de R$ 1.00\n", qtd);
        else
            printf("%d moeda(s) de R$ 0.%02d\n", qtd, moedas[i]);
        centavos %= moedas[i];
    }

    return 0;
}
