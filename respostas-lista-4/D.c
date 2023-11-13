#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = array[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = array[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(array, inicio, meio);
        mergeSort(array, meio + 1, fim);

        merge(array, inicio, meio, fim);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *numeros = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    mergeSort(numeros, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d", numeros[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    printf("\n");  
    free(numeros);

    return 0;
}
