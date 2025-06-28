#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int busca_primeira_ocorrencia(int *arr, int n, int alvo) {
    int esquerda = 0, direita = n - 1, resultado = -1;
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (arr[meio] == alvo) {
            resultado = meio;
            direita = meio - 1;
        } else if (arr[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return resultado;
}

int main() {
    int N, Q, caso = 1;
    while (scanf("%d %d", &N, &Q) && (N || Q)) {
        int numeros[10000];
        for (int i = 0; i < N; i++) {
            scanf("%d", &numeros[i]);
        }

        qsort(numeros, N, sizeof(int), compare);

        printf("CASE# %d:\n", caso++);
        for (int i = 0; i < Q; i++) {
            int consulta;
            scanf("%d", &consulta);
            int pos = busca_primeira_ocorrencia(numeros, N, consulta);
            if (pos != -1) {
                printf("%d found at %d\n", consulta, pos + 1);
            } else {
                printf("%d not found\n", consulta);
            }
        }
    }
    return 0;
}
