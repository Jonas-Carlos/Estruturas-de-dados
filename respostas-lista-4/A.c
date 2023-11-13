#include <stdio.h>

void ordenacaoBolha(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[1000];
    int tamanho = 0;

    while (scanf("%d", &numeros[tamanho]) != EOF && tamanho < 1000) {
        tamanho++;
    }

    ordenacaoBolha(numeros, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);

        if (i < tamanho - 1) {
            printf(" ");
        }
    }

    printf("\n");  

    return 0;
}
