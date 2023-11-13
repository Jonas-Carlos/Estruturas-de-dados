#include <stdio.h>

void insereElemento(int *v, int n) {
    if (n > 1 && v[n - 1] < v[n - 2]) {
        int temp = v[n - 1];
        v[n - 1] = v[n - 2];
        v[n - 2] = temp;

        insereElemento(v, n - 1);
    }
}

void ordena(int *v, int n) {
    if (n > 1) {
        ordena(v, n - 1);

        insereElemento(v, n);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *numeros = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    ordena(numeros, n);

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
