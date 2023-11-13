#include <stdio.h>

void ordenacaoInsercao(int array[], int tamanho) {
    int i, chave, j;
    for (i = 1; i < tamanho; i++) {
        chave = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = chave;
    }
}

int main() {
    int numeros[50000];
    int tamanho = 0;

    while (scanf("%d", &numeros[tamanho]) != EOF && tamanho < 50000) {
        tamanho++;
    }

    ordenacaoInsercao(numeros, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);

        if (i < tamanho - 1) {
            printf(" ");
        }
    }

    printf("\n");  

    return 0;
}
