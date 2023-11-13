#include <stdio.h>

void ordenacaoSelecao(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;

        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] < array[indiceMenor]) {
                indiceMenor = j;
            }
        }

        if (indiceMenor != i) {
            int temp = array[i];
            array[i] = array[indiceMenor];
            array[indiceMenor] = temp;
        }
    }
}

int main() {
    int numeros[1000];
    int tamanho = 0;

    while (scanf("%d", &numeros[tamanho]) != EOF && tamanho < 1000) {
        tamanho++;
    }

    ordenacaoSelecao(numeros, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);

        if (i < tamanho - 1) {
            printf(" ");
        }
    }

    printf("\n");  

    return 0;
}
